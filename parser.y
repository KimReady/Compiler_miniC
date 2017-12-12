%{
#include <stdio.h>
#include <string.h>
#include "AST.h"
#include "Ucode.h"
extern FILE* yyin;
extern int yylex();
extern int yylineno;
extern char* yytext;
extern Node* valueStack[STACK_SIZE];
extern int sp;
void yyerror(char *msg);

Node* root;
%}

%union {
	struct nodeType* node;
	char* ch_val;
}

%token <ch_val> tident tinumber tfnumber tstring
%token tconst telse tif tint treturn tvoid twhile tfloat tfor tchar
%token tequal tnotequ tlesse tless tgreate tgreat tand tor tinc tdec
%token taddAssign tsubAssign tmulAssign tdivAssign
%token topen tclose oopen cclose comma semi ttinc ttdec ttdiv ttmul ttmod arrayopen arrayclose
%token equal not less bigger

%type <node> mini_c translation_unit external_dcl function_def function_header dcl_spec opt_expression
%type <node> dcl_specifiers dcl_specifier type_qualifier type_specifier function_name formal_param opt_formal_param formal_param_list
%type <node> param_dcl compound_st opt_dcl_list declaration_list declaration init_dcl_list init_declarator declarator
%type <node> opt_number opt_stat_list statement_list statement for_st expression_st if_st while_st return_st expression
%type <node> assignment_exp logical_or_exp logical_and_exp equality_exp relational_exp additive_exp multiplicative_exp
%type <node> unary_exp postfix_exp opt_actual_param actual_param actual_param_list primary_exp
%type <node> ident inumber fnumber string

%left ttinc ttdec
%left ttmul ttdiv
%nonassoc LOWER_THAN_ELSE
%nonassoc telse

%%
mini_c	:	translation_unit
{
	root = buildTree(PROGRAM, rightHandsLen[PROGRAM]);
}
			;
translation_unit	:	external_dcl					{ rightHandsLen[PROGRAM]++;	}
			|	translation_unit external_dcl			{ rightHandsLen[PROGRAM]++;	}
			;
external_dcl		:	function_def
			|	declaration
			;
function_def		:	function_header compound_st		{ buildTree(FUNC_DEF, 2);	}
						| 	function_header semi
			;
function_header		:	dcl_spec function_name formal_param	{ buildTree(FUNC_HEAD, 3);	}
			;
dcl_spec		:	dcl_specifiers			{ buildTree(DCL_SPEC, rightHandsLen[DCL_SPEC]);	}
			;
dcl_specifiers		:	dcl_specifier				{ rightHandsLen[DCL_SPEC]++;		}
			|	dcl_specifiers dcl_specifier		{ rightHandsLen[DCL_SPEC]++;		}
			;
dcl_specifier		:	type_qualifier
			|	type_specifier
			;
type_qualifier		:	tconst					{ buildTree(CONST_NODE, 0);	}
			;
type_specifier		:	tint					{ buildTree(INT_NODE, 0);	}
			|	tvoid					{ buildTree(VOID_NODE, 0);	}
			|	tfloat					{ buildTree(FLOAT_NODE, 0);	}
			|	tchar					{ buildTree(CHAR_NODE, 0);	}
			;
function_name		:	ident
			;
formal_param		:	topen opt_formal_param tclose		{ buildTree(FORMAL_PARA, rightHandsLen[FORMAL_PARA]); }
			;
opt_formal_param	:	formal_param_list
			|	{$$=NULL;}
			;
formal_param_list	:	param_dcl				{ rightHandsLen[FORMAL_PARA]++;	}
			|	formal_param_list comma param_dcl		{ rightHandsLen[FORMAL_PARA]++;	}
			;
param_dcl		:	dcl_spec declarator			{ buildTree(PARAM_DCL, 2);	}
					|	tvoid				{ buildTree(VOID_NODE, 0);}
			;
compound_st		:	oopen opt_dcl_list opt_stat_list cclose	{ buildTree(COMPOUND_ST, 2); }
			;
opt_dcl_list		:	declaration_list	{ buildTree(DCL_LIST, rightHandsLen[DCL_LIST]); rightHandsLen[COMPOUND_ST]++;}
			|				{ buildTree(DCL_LIST, 0);			}
			;
declaration_list	:	declaration				{ rightHandsLen[DCL_LIST]++;	}
			|	declaration_list declaration		{ rightHandsLen[DCL_LIST]++;	}
			;
declaration		:	dcl_spec init_dcl_list semi		{ buildTree(DCL, rightHandsLen[DCL]+1);	}
			;
init_dcl_list		:	init_declarator				{ rightHandsLen[DCL]++;		}
			|	init_dcl_list comma init_declarator	{ rightHandsLen[DCL]++;		}
			;
init_declarator		:	declarator				{ buildTree(DCL_ITEM, 1);	}
			|	declarator equal inumber			{ buildTree(DCL_ITEM, 2);	}
			|	declarator equal fnumber			{ buildTree(DCL_ITEM, 2);	}
			|	declarator equal string			{ buildTree(DCL_ITEM, 2);	}
			;
declarator		:	ident				{ buildTree(SIMPLE_VAR, 1);		}
			|	ident arrayopen opt_number arrayclose	{ buildTree(ARRAY_VAR, rightHandsLen[ARRAY_VAR]+1);	}
			;
opt_number		:	inumber					{ rightHandsLen[ARRAY_VAR]++;		}
			|	{$$=NULL;}
			;
opt_stat_list		:	statement_list				{

	rightHandsLen[STAT_LIST] = 0;
	i = sp;

	while(i > 0)
	{
		if(valueStack[i]->token.tokenNumber == COMPOUND_ST || valueStack[i]->token.tokenNumber == EXP_ST
			|| valueStack[i]->token.tokenNumber == IF_ST || valueStack[i]->token.tokenNumber == WHILE_ST
			|| valueStack[i]->token.tokenNumber == IF_ELSE_ST || valueStack[i]->token.tokenNumber == FOR_ST
			|| valueStack[i]->token.tokenNumber == RETURN_ST)
		{
			rightHandsLen[STAT_LIST]++; i--;
		}
		else i=0;
	}

	buildTree(STAT_LIST, rightHandsLen[STAT_LIST]);
	rightHandsLen[COMPOUND_ST]++;
}
			| {$$=NULL;}
			;
statement_list		:	statement				{ rightHandsLen[STAT_LIST]++;		}
			|	statement_list statement		{ rightHandsLen[STAT_LIST]++;		}
			;
statement		:	compound_st
			|	expression_st
			|	if_st
			|	while_st
			|	for_st
			|	return_st
			;
for_st			:	tfor topen opt_expression semi
				opt_expression semi
				opt_expression tclose
				statement				{ buildTree(FOR_ST, 0);			}
			;
expression_st		:	opt_expression semi			{ buildTree(EXP_ST, rightHandsLen[EXP_ST]);	}
			;
opt_expression		:	expression				{ rightHandsLen[EXP_ST]++;	}
			|	{$$=NULL;}
			;
if_st			:	tif topen expression tclose statement %prec LOWER_THAN_ELSE 	{ buildTree(IF_ST, 2);	}
			|	tif topen expression tclose statement
				telse statement				{ buildTree(IF_ELSE_ST, 3);	}
			;
while_st		:	twhile topen expression tclose statement	{ buildTree(WHILE_ST, 2);	}
			;
return_st		:	treturn opt_expression semi 		{ buildTree(RETURN_ST, rightHandsLen[EXP_ST]);	}
			;
expression		:	assignment_exp
			;
assignment_exp		:	logical_or_exp
			|	unary_exp equal assignment_exp		{ buildTree(ASSIGN_OP, 2);	}
			|	unary_exp taddAssign assignment_exp	{ buildTree(ADD_ASSIGN, 2);	}
			|	unary_exp tsubAssign assignment_exp	{ buildTree(SUB_ASSIGN, 2);	}
			|	unary_exp tmulAssign assignment_exp	{ buildTree(MUL_ASSIGN, 2);	}
			|	unary_exp tdivAssign assignment_exp	{ buildTree(DIV_ASSIGN, 2);	}
			;
logical_or_exp		:	logical_and_exp
			|	logical_or_exp tor logical_and_exp	{ buildTree(LOGICAL_OR, 2);	}
			;
logical_and_exp		:	equality_exp
			|	logical_and_exp tand equality_exp	{ buildTree(LOGICAL_AND, 2);	}
			;
equality_exp		:	relational_exp
			|	equality_exp tequal relational_exp	{ buildTree(EQ, 2);		}
			|	equality_exp tnotequ relational_exp	{ buildTree(NE, 2);		}
			;
relational_exp		:	additive_exp
			|	relational_exp bigger additive_exp		{ buildTree(GT, 2);		}
			|	relational_exp less additive_exp		{ buildTree(LT, 2);		}
			|	relational_exp tgreate additive_exp	{ buildTree(GE, 2);		}
			|	relational_exp tlesse additive_exp	{ buildTree(LE, 2);		}
			;
additive_exp		:	multiplicative_exp
			|	additive_exp ttinc multiplicative_exp	{ buildTree(ADD, 2);		}
			|	additive_exp ttdec multiplicative_exp	{ buildTree(SUB, 2);		}
			;
multiplicative_exp	:	unary_exp
			|	multiplicative_exp ttmul unary_exp	{ buildTree(MUL, 2);		}
			|	multiplicative_exp ttdiv unary_exp	{ buildTree(DIV, 2);		}
			|	multiplicative_exp ttmod unary_exp	{ buildTree(MOD, 2);		}
			;
unary_exp		:	postfix_exp
			|	ttdec unary_exp				{ buildTree(UNARY_MINUS, 1);	}
			|	not unary_exp				{ buildTree(LOGICAL_NOT, 1);	}
			|	tinc unary_exp				{ buildTree(PRE_INC, 1);	}
			|	tdec unary_exp				{ buildTree(PRE_DEC, 1);	}
			;
postfix_exp		:	primary_exp
			|	postfix_exp arrayopen expression arrayclose		{ buildTree(INDEX, 2);		}
			|	postfix_exp topen opt_actual_param tclose	{ buildTree(CALL, 2);		}
			|	postfix_exp tinc			{ buildTree(POST_INC, 1);	}
			|	postfix_exp tdec			{ buildTree(POST_DEC, 1);	}
			;
opt_actual_param	:	actual_param
			|	{$$=NULL;}
			;
actual_param		:	actual_param_list			{ buildTree(ACTUAL_PARAM, 1);	}
			;
actual_param_list	:	assignment_exp
			|	actual_param_list comma assignment_exp
			;
primary_exp		:	ident
			|	inumber
			|	fnumber
			|	string
			|	topen expression tclose	{$$=$2;}
			;
ident			:	tident					{ buildNode(IDENT, $1);		};
inumber			:	tinumber				{ buildNode(NUMBER, $1);	};
fnumber			:	tfnumber				{ buildNode(NUMBER, $1);	};
string			:	tstring				{ buildNode(STRING, $1);	};
%%
void yyerror(char* msg) {
	printf("%d : %s %d\n", lineno, msg, yytext[0]);
}

Node* parser(FILE* srcFile) {
	yyin = srcFile;
	do {
		yyparse();
	} while(!feof(yyin));

	return root;
}

int main(int argc, char *argv[])
{
	FILE* srcFile;
	FILE* dstFile;
	char ifileName[100];
	char ofileName[100];
	Node *root;

	if(argc != 3) {
		printf("usage './execfile inputfile outputfile' format.\n");
		return 1;
	}

	if(argv[1] != NULL)
		strcpy(ifileName, argv[1]);
	if(argv[2] != NULL)
		strcpy(ofileName, argv[2]);

	srcFile= fopen(ifileName, "r");
	dstFile = fopen(ofileName, "w");

	if(!srcFile || !dstFile) {
		fprintf(stderr, "could not open file\n");
		perror("omygod:");
		return 2;
	}

	root = parser(srcFile);

	fprintf(dstFile, " \tSymbol table!\n");
	fprintf(dstFile, "num id \tvalue\n");
	fprintf(dstFile, "======================\n");
	codeGen(valueStack[sp], dstFile);
	fprintf(dstFile, "======================\n");
	fclose(srcFile);
	fclose(dstFile);

	return 0;
}
