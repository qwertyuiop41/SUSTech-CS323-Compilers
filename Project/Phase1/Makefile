CC=gcc
GPP=g++
FLEX=flex
BISON=bison
CXX_VERSION = -std=c++17

# splc:
# 	@mkdir bin
# 	$(BISON) -d syntax.y
# 	$(FLEX) lex.l
# 	$(CC) syntax.tab.c -lfl -o bin/splc

# ftest:
# 	$(FLEX) lex.l
# 	$(CC) lex.yy.c -lfl -o ./a.out

# printTest:
# 	$(FLEX) print_lex.l
# 	$(CC) lex.yy.c -lfl -o print.out 
# 	./print.out test/test_1_r01.spl > output.txt
splc:
	@mkdir bin
	@mkdir myOutput
	touch bin/splc
	@chmod +x bin/splc
	$(BISON) -d syntax.y -v
	$(FLEX) lex.l
	$(GPP) syntax.tab.c tree.cpp my_error.cpp -lfl -o bin/splc 

clean:	
	@rm -rf bin lex.yy.c syntax.tab.c syntax.tab.h *.out output.txt myOutput
.PHONY: splc
