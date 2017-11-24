%{
#include "parser.tab.h"
#include "AST.h"
int yywrap();
%}

%%
"const"	{ return(tconst);	}
"else"	{ return(telse);	}
"if"		{ return(tif);		}
"int"		{ return(tint);		}
"return"	{ return(treturn);	}
"void"	{ return(tvoid);	}
"while"	{ return(twhile);	}

"float"	{return(tfloat);}
"for"		{return(tfor);}
"char"	{return(tchar);}

"=="		{return(tequal);}
"!="		{return(tnotequ);}
"<="		{return(tlesse);}
">="		{return(tgreate);}
"&&"		{return(tand);}
"||"		{return(tor);}
"++"		{return(tinc);}
"--"		{return(tdec);}
"+="		{return(taddAssign);}
"-="		{return(tsubAssign);}
"*="		{return(tmulAssign);}
"/="		{return(tdivAssign);}

"("		{return(topen);}
")"		{return(tclose);}
"{"		{return(oopen);}
"}"		{return(cclose);}
","		{return(comma);}
";"		{return(semi);}
"+"		{return(ttinc);}
"-"		{return(ttdec);}
"/"		{return(ttdiv);}
"*"		{return(ttmul);}
"%"		{return(ttmod);}
"["		{return(arrayopen);}
"]"		{return(arrayclose);}
"="		{return(equal);}
"!"		{return(not);}
"<"		{return(less);}
">"		{return(bigger);}

[A-Za-z_][A-Za-z0-9_]*							{ yylval.ch_val = TokenToString(yytext);	return(tident);	 }
[1-9][0-9]*|0([0-7]+|(x|X)[0-9A-Fa-f]*)?	{ yylval.ch_val = TokenToString(yytext);	return(tinumber);}
[0-9]+"."[0-9]+(e[+-]?[0-9]+)?				{ yylval.ch_val = TokenToString(yytext);	return(tfnumber);}
\"([^"\n\\]|\\(.|\n))*\"						{ yylval.ch_val = TokenToString(yytext);	return(tstring); }
"/*"([^*]|\*+[^*/])*\**"*/"			;
"//".*								;
[ \t]+						;
\r		;
\n		{lineno++; return (yytext[0]);}
.	{return(yytext[0]);}
%%

int yywrap() {
	return 0;
}


