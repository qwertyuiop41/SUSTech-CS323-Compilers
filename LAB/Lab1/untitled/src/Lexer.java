import java.io.File;
import java.io.FileNotFoundException;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class Lexer {
    private int position;
    private char chr;
    private String s;

    Token prevToken;
    Token curToken;

    Map<String, TokenType> keywords = new HashMap<>();

    static class Token {
        public TokenType tokentype;
        public String value;

        Token(TokenType token, String value) {
            this.tokentype = token; this.value = value;
        }
        @Override
        public String toString() {
            String result = String.format(this.tokentype.toString()+" ");
            return result;
        }
    }

    static enum TokenType {
        TYPE,INT,ID,IF,ELSE,WHILE,RET,SEMI,ASSIGN,LT,LE,GT,GE,NE,EQ,PLUS,MINUS,LP,RP,LC,RC,END
    }

    static void error( String msg) {
        System.out.println(msg);
        System.exit(1);
    }
    static void error( ) {
        System.out.println("ERROR");
        System.exit(1);
    }

    Lexer(String source) {
        this.curToken=null;
        this.prevToken=null;
        this.position = 0;
        this.s = source;
        this.chr = this.s.charAt(0);
        this.keywords.put("if", TokenType.IF);
        this.keywords.put("else", TokenType.ELSE);
        this.keywords.put("while", TokenType.WHILE);
        this.keywords.put("return", TokenType.RET);
        this.keywords.put("int",TokenType.TYPE);

    }

    Token identifier_or_integer_or_type() {

        boolean is_number = true;
        String text = "";
        while (Character.isAlphabetic(this.chr) || Character.isDigit(this.chr) || this.chr == '$'
                ||(this.chr=='-'&&text.equals(""))||(this.chr=='+'&&text.equals(""))||(this.chr=='_')) {
            text += this.chr;
            if (text.charAt(0)!='-'&&text.charAt(0)!='+'&&!Character.isDigit(this.chr)) {
                is_number = false;
            }
            getNextChar();
        }
        retract();

        if (text.equals("")) {
            error( );
        }

        if (Character.isDigit(text.charAt(0))||text.charAt(0)=='-'||text.charAt(0)=='+') {
            if (!is_number) {
                error();
            }
            return new Token(TokenType.INT, text);
        }

        if (this.keywords.containsKey(text)) {
            return new Token(this.keywords.get(text), text);
        }
        return new Token(TokenType.ID, text);
    }


    Token relop_or_assign(int state) {
        String value="";
        Token t=null;
        while (!Character.isWhitespace(this.chr)) {
            switch (state) {
                case 0:
                    value=value+this.chr;
                    if (this.chr=='<'){
                        t=new Token(TokenType.LT ,"<");
                        state=1;
                    }
                    else if (this.chr=='='){
                        t=new Token(TokenType.ASSIGN ,"=");
                        state=4;
                    }
                    else if (this.chr=='>'){
                        t=new Token(TokenType.GT ,"<");
                        state=6;
                    }
                    else if(this.chr=='!'){
                        state=9;
                    }else {
                        return null;
                    }
                    getNextChar();
                    break;
                case 1:
                    if (this.chr=='=')return new Token(TokenType.LE, "<=");
                    else {
                        char LastChar=retract();
                        return new Token(TokenType.LT ,"<");
                    }
//                    break;
                case 4:
                    if (this.chr=='=')return new Token(TokenType.EQ, "==");
                    else {
                        char LastChar=retract();
                        return new Token(TokenType.ASSIGN ,"=");
//                        value=value+this.chr;
//                        error(line, pos, String.format("relop unrecopgnized: (%d) %s", (int)this.chr, value));
                    }
//                    break;
                case 6:
                    if (this.chr=='=')return new Token(TokenType.GE, ">=");
                    else {
                        char LastChar=retract();
                        return new Token(TokenType.GT ,"<");
                    }
//                    break;
                case 9:
                    if (this.chr=='=')return new Token(TokenType.NE, "!=");
                    else {
                        value=value+this.chr;
                        error(String.format("relop unrecopgnized: (%c) %s", this.chr, value));
                    }
                    break;
                default:
                    error("error");
            }
        }

        return t;
    }
    Token comment_end() {
        String value="";
        if (!Character.isWhitespace(this.chr)) {
            value=value+this.chr;
            if (this.chr=='(')return new Token(TokenType.LP, "(");
            else if (this.chr==')')return new Token(TokenType.RP, ")");
            else if (this.chr=='{')return new Token(TokenType.LC, "{");
            else if(this.chr=='}')return new Token(TokenType.RC, "}");
            else if(this.chr==';')return new Token(TokenType.SEMI, ";");
            else if(this.chr=='\u0000')return new Token(TokenType.END, " ");
            else return null;
        }

        return null;
    }
    Token operation(int state) {
        String value="";
        Token t=null;
        while (!Character.isWhitespace(this.chr)) {
            switch (state) {
                case 0:
                    value=value+this.chr;
                    if (this.chr=='+'){
                        t=new Token(TokenType.PLUS ,"+");
                        state=1;
                    }
                    else if (this.chr=='-'){
                        t=new Token(TokenType.MINUS ,"-");
                        state=3;
                    }else {
                        return null;
                    }
                    getNextChar();
                    break;
                case 1:
                    if (Character.isDigit(this.chr)&&this.prevToken.tokentype!=TokenType.ID&&this.prevToken.tokentype!=TokenType.INT){
                        retract();
                        return null;
                    }
                    else {
                        retract();
                        return new Token(TokenType.PLUS ,"+");
                    }
//                    break;
                case 3:
                    if (Character.isDigit(this.chr)&&this.prevToken.tokentype!=TokenType.ID&&this.prevToken.tokentype!=TokenType.INT){
                        retract();
                        return null;
                    }
                    else {
                        retract();
                        return new Token(TokenType.MINUS ,"-");
                    }
//                    break;
            }
        }

        return t;
    }

    char getNextChar() {
        this.position++;
        if (this.position >= this.s.length()) {
            this.chr = '\u0000';
            return this.chr;
        }
        this.chr = this.s.charAt(this.position);
        if (this.chr == '\n') {
            System.out.println();
        }
        return this.chr;
    }

    char retract() {
        this.position--;
        this.chr = this.s.charAt(this.position);
        return this.chr;
    }


    void printTokens() {
        while (this.position<this.s.length()) {
            while (Character.isWhitespace(this.chr)){
                getNextChar();
            }
            this.curToken=relop_or_assign(0);
            if (this.curToken!=null){
                System.out.print(this.curToken);
                getNextChar();
                this.prevToken=this.curToken;
                continue;
            }
            this.curToken=operation(0);
            if (this.curToken!=null){
                System.out.print(this.curToken);
                getNextChar();
                this.prevToken=this.curToken;
                continue;
            }
            this.curToken=comment_end();
            if (this.curToken!=null){
                if (this.curToken.tokentype==TokenType.END){
                    break;
                }
                System.out.print(this.curToken);
                getNextChar();
                this.prevToken=this.curToken;
                continue;
            }
            this.curToken=identifier_or_integer_or_type();
            if (this.curToken!=null){
                System.out.print(this.curToken);
                getNextChar();
                this.prevToken=this.curToken;
            }
        }
    }
    public static void main(String[] args) {
        if (args.length > 0) {
            try {
                File f = new File(args[0]);
                Scanner s = new Scanner(f);
                String source = " ";
                while (s.hasNext()) {
                    source += s.nextLine() + "\n";
                }
                Lexer l = new Lexer(source);
                l.printTokens();
            } catch(FileNotFoundException e) {
                error("Exception: " + e.getMessage());
            }
        } else {
            error("No args");
        }
    }
}
