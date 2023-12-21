#include "type.hpp"

SemanticType::SemanticType(Category category, NodeType nodetype){
    this->category = category;
    this->nodetype = nodetype;
}

SemanticType::SemanticType(Category category, Array* array_ptr){
    this->array_ptr = array_ptr;
    this->category = category;
}

SemanticType::SemanticType(Category category, ParamList* params_ptr){
    this->category = category;
    this->params_ptr = params_ptr;
}

ParamList::ParamList(string name, SemanticType* type_, ParamList* next){
    this->name = string(name);
    this->type_ = type_;
    this->next = next;
}

SemanticType* getPrimitiveType(Node* node){
    switch (node->nodetype)
    {
    case NodeType::Int:
        return new SemanticType(Category::PRIMITIVE, NodeType::Int);
    case NodeType::Char:
        return new SemanticType(Category::PRIMITIVE, NodeType::Char);
    case NodeType::Float:
        return new SemanticType(Category::PRIMITIVE, NodeType::Float);
    default:
        printf("not a primitive type\n");
        return nullptr;
    }
}

Array::Array(SemanticType *base, int size) : base(base), size(size) {}

bool type_eq(SemanticType* global_type1, SemanticType* global_type2) {
    if (global_type1 == nullptr || global_type2 == nullptr) {
        return true;
    }
    if (global_type1->category == global_type2->category) {
        if (global_type1->category == Category::PRIMITIVE && global_type1->nodetype == global_type2->nodetype) {
            return true;
        } else if (global_type1->category == Category::ARRAY &&
            type_eq(global_type1->array_ptr->base, global_type2->array_ptr->base) &&
            global_type1->array_ptr->size == global_type2->array_ptr->size) {
            return true;
        } else if(global_type1->category == Category::STRUCTURE || global_type1->category == Category::FUNCTION) {
			ParamList* param1 = global_type1->params_ptr;
			ParamList* param2 = global_type2->params_ptr;
			while(param1 != nullptr && param2 != nullptr)
			{
				if(!type_eq(param1->type_, param2->type_)) {
					return false;
                }
				param1 = param1->next;
				param2 = param2->next;
			}
			if(param1 != nullptr || param2 != nullptr) {
				return false;
            }
			return true;
		}
    }
    return false;
}
