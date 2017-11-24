.SIMPHONY: all clean

all:
	bison -d parser.y
	flex lexer.l
	gcc -o ASTminiC lex.yy.c parser.tab.c AST.c -ly -ll

clean:
	rm -f *.tab.? lex.* ASTminiC astFile.txt
