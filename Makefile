.SIMPHONY: all clean

all:
	bison -d parser.y
	flex lexer.l
	gcc -g -o miniC lex.yy.c parser.tab.c AST.c Ucode.c -ly -ll

clean:
	rm -f *.tab.? lex.* miniC
