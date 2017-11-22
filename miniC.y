%{
#include <stdio.h>
#include "y.tab.h"
#include "lex.yy.c"	/* #include "lex.yy.c"*/
int yyerror(char* s);
void semantic(int n);
%}
%union
{
	char ch_val[NAMESIZE];
	int int_val;
	Node *ast_pt;
}

%token <ch_val> IDENTIFIER
%token <ch_val> NUMBER
%token tident tnumber tconst telse tif treturn tint tvoid twhile
%token taddAssign tsubAssign tmulAssign tdivAssign tmodAssign
%token tor tand tequal tnotequ tgreate tlesse tinc tdec

%type <int_val> mini_c 
%type <int_val> external_dcls
%type <int_val> external_dcl 
%type <int_val> function_def 
%type <int_val> function_header 
%type <int_val> dcl_spec 
%type <int_val> dcl_specifiers 
%type <int_val> dcl_specifier
%type <int_val> type_qualifier 
%type <int_val> type_specifier
%type <int_val> function_name
%type <int_val> formal_param
%type <int_val> opt_formal_param 
%type <int_val> formal_param_list
%type <int_val> param_dcl
%type <int_val> compound_st
%type <int_val> declaration_list
%type <int_val> declaration
%type <int_val> init_dcl_list
%type <int_val> init_declarator
%type <int_val> declarator
%type <int_val> opt_number
%type <int_val> statement_list
%type <int_val> statement
%type <int_val> expression_st
%type <int_val> if_st
%type <int_val> while_st
%type <int_val> return_st
%type <int_val> expression
%type <int_val> assignment_exp
%type <int_val> logical_or_exp
%type <int_val> logical_and_exp
%type <int_val> equality_exp
%type <int_val> relational_exp
%type <int_val> additive_exp
%type <int_val> multiplicative_exp
%type <int_val> unary_exp
%type <int_val> postfix_exp
%type <int_val> opt_actual_param
%type <int_val> actual_param_list
%type <int_val> primary_exp
%type <int_val> opt_dcl_list
%type <int_val> opt_stat_list
%type <int_val> opt_expression 
%type <int_val> actual_param


%type <int_val> param_s
%type <int_val> block_s

%type <int_val> while_s

%type <int_val> if_condition
%type <int_val> else_s

%type <int_val> ass_lhs

%type <int_val> index_exp
%type <int_val> call_exp

%type <int_val> unary_pre_inc
%type <int_val> unary_pre_dec

%type <int_val> postfix_inc
%type <int_val> postfix_dec

%type <int_val> act_para_s

%right '='
%left tand tor
%left '+' '-'
%left '*' '/' '%'
%nonassoc IFX
%nonassoc LOWER_THAN_ELSE 
%nonassoc ELSE
%%
start	: mini_c {
		root=(Node *)$1;
		printTree(root,0);
		codeGen(root);
	};
mini_c	: translation_unit	{semantic(1);};
translation_unit	: external_del	{semantic(2);}
	|translation_unit external_del	{semantic(3);};
external_del	: function_def	{semantic(4);}
	|declaration	{semantic(5);};
function_def	: function_header compound_st	{semantic(6);};
function_header	: dcl_spec function_name formal_param	{semantic(7);};
dcl_spec	: dcl_specifiers	{semantic(8);};
dcl_specifiers	: dcl_specifier	{semantic(9);}
		| dcl_specifier dcl_specifier	{semantic(10);};
dcl_specifier	: type_qualifier	{semantic(11);}
		| type_specifier	{semantic(12);};
type_qualifier	: tconst		{semantic(13);};
type_specifier	: tint	{semantic(14);}
		| tvoid	{semantic(15);};
function_name	: tident	{semantic(16);};
formal_param	: '(' opt_formal_param ')'	{semantic(17);};
opt_formal_param	: formal_param_list	{semantic(18);}
			|			{semantic(19);};
formal_param_list	: param_dcl	{semantic(20);}
			| formal_param_list ',' param_dcl	{semantic(21);};
param_dcl	: dcl_spec declarator	{semantic(22);};
compound_st	: '{' opt_dcl_list opt_stat_list '}'	{semantic(22);};
opt_dcl_list	: declaration_list	{semantic(24);}
		|			{semantic(25);};
declaration_list	: declaration	{semantic(26);}
			| declaration_list declaration	{semantic(27);};
declaration	: dcl_spec init_dcl_list ';'	{semantic(28);};
init_dcl_list	: init_declarator	{semantic(29);}
		| init_dcl_list ',' init_declarator	{semantic(30);};
init_declarator	: declarator	{semantic(31);}
		| declarator '=' additive_exp	{semantic(32);};
declarator	: tident	{semantic(33);}
		| tident '[' opt_number ']'	{semantic(34);};
opt_number	:tnumber	{semantic(35);}
		|		{semantic(36);};
opt_stat_list	: statement_list	{semantic(37);}
		| 			{semantic(38);};
statement_list	: statement	{semantic(39);}
		| statement_list statement	{semantic(40);};
statement	: compound_st	{semantic(41);}
		| expression_st	{semantic(42);}
		| if_st		{semantic(43);}
		| while_st	{semantic(44);}
		| return_st	{semantic(45);}
		;
expression_st	: opt_expression ';'	{semantic(46);};
opt_expression	: expression	{semantic(47);}
		|		{semantic(48);};
if_st	: tif '(' expression ')' statement %prec IFX	{semantic(49);}
	| tif '(' expression ')' statement
	  telse statement	{semantic(50);};
while_st	: twhile '(' expression ')' statement	{semantic(51);};
return_st	: treturn opt_expression ';'	{semantic(52);};
expression	: assignment_exp	{semantic(53);};
assignment_exp	: logical_or_exp	{semantic(54);}
		| unary_exp '=' assignment_exp	{semantic(55);}
		| unary_exp taddAssign assignment_exp	{semantic(56);}
		| unary_exp tsubAssign assignment_exp	{semantic(57);}
		| unary_exp tmulAssign assignment_exp	{semantic(58);}
		| unary_exp tdivAssign assignment_exp	{semantic(59);}
		| unary_exp tmodAssign assignment_exp	{semantic(60);}
		;
logical_or_exp	: logical_and_exp	{semantic(61);}
		| logical_or_exp tor logical_and_exp	{semantic(62);};
logical_and_exp	: equality_exp	{semantic(63);}
		| logical_and_exp tand equality_exp	{semantic(64);};
equality_exp	: relational_exp	{semantic(65);}
		| equality_exp tequal relational_exp	{semantic(66);}
		| equality_exp tnotequ relational_exp	{semantic(67);};
relational_exp	: additive_exp	{semantic(68);}
		| relational_exp '>' additive_exp	{semantic(69);}
		| relational_exp '<' additive_exp	{semantic(70);}
		| relational_exp tgreate additive_exp	{semantic(71);}
		| relational_exp tlesse additive_exp	{semantic(72);};
additive_exp	: multiplicative_exp	{semantic(73);}
		| additive_exp '+' multiplicative_exp	{semantic(74);}
		| additive_exp '-' multiplicative_exp	{semantic(75);};
multiplicative_exp	: unary_exp	{semantic(76);}
			| multiplicative_exp '*' unary_exp	{semantic(77);}
			| multiplicative_exp '/' unary_exp	{semantic(78);}
			| multiplicative_exp '%' unary_exp	{semantic(79);};
unary_exp	: postfix_exp	{semantic(80);}
		| '-' unary_exp	{semantic(81);}
		| '!' unary_exp	{semantic(82);}
		| tinc unary_exp	{semantic(83);}
		| tdec unary_exp	{semantic(84);};
postfix_exp	: primary_exp	{semantic(85);}
		| postfix_exp '[' expression ']'	{semantic(86);}
		| postfix_exp '(' opt_actual_param ')'	{semantic(87);}
		| postfix_exp tinc	{semantic(88);}
		| postfix_exp tdec	{semantic(89);};
opt_actual_param	: actual_param	{semantic(90);}
			|		{semantic(91);};
actual_param	: actual_param_list	{semantic(92);};
actual_param_list	: assignment_exp	{semantic(93);}
			| actual_param_list ',' assignment_exp	{semantic(94);};
primary_exp	: tident	{semantic(95);}
		| tnumber	{semantic(96);}
		| '(' expression ')'	{semantic(97);};
%%
int yyerror(char *s){
	printf("%d : %s %s\n", yylineno, s, yytext);
	return 0;
}
void semantic(int n){
	printf("reduced rule number = %d\n",n);
}
int main(){
	FILE *file;
	char outname[256];

	lineno=0;

	file=fopen(argv[1],"r");
	if(!file)
		printf("file is not open\n");

	sprintf(outname,"%s.log",argv[1]);
	out=fopen(outname,"w");

	yyin=file;
	yyparse();

	fclose(file);
	return 1;
}

