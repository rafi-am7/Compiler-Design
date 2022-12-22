/*c declarations */

%{
#include <stdio.h>
#include <string.h>
#include <math.h>
#include "1807119.tab.h"
#include <stdlib.h>
%}

variable [a-zA-Z][a-zA-Z0-9]*

%%
"=" {return ASSIGN;}
"int" {return INT;}
"float" {return FLOAT;}
"char" {return CHAR;}
[-+]?[0-9]+ { 
  yylval.iv=atoi(yytext);
     return NINT;
}
[-+]?[0-9]*"."[0-9]+ { 
  yylval.fv=atof(yytext);
     return NFLOAT;
}
"SWITCH"  { return SWITCH; }
"CASE"    { return CASE;  } 
"loop" {return Loop;}
"DEFAULT"  { return DEFAULT; }
"DISPLAY"    { return SHOW; }
"~>"   {return st;}
"<~"  {return et;}
"!" {return floattracker;}
"+" {return PLUS;}
"/" {return DIV;}
"*" {return MULT;}
"-" {return MINUS;}
"sum"         {return SUM;}
"multiply"         {return Multiply ;}
"Even_Odd" {return eo;}
"EITHER" {return IF;}
"OR" {return ELSE;}

"While"  {return WHILE;}
"year" { return YEAR; }
"palindrome" { return pal; }
"Division"  {return division ; }
"prime"    {return Prime ;}
"factorial"         {return FACTORIAL ;}
"power" 	{return powerf;}
"SIN" {return sine;}
"COS" {return cose;}
"TAN" {return tane;}
"TRIGO" {return trigo;}
"(" {return LP;}
")" {return RP;}
"Begin" {return LB;}
"Finish" {return RB;}
"," {return CM;}
";" {return SM;}
":" {return CC;}
"<" {return LT;}
">" {return GT;}
"++" {return incre ; }
"--" {return decre ;}
">=" {return gteq; }
"<=" {return lteq; }
"&&" {return and; }
"||" {return or; }
"==" {return equal; }
"!=" {return notequal; }
{variable} {yylval.sv=strdup(yytext);
return VARIABLE;
}
"void HORROR" {return MAIN_FUNC ;}

[ \t\n]* ;

. {
    yyerror(" unknown char.\n");
 }
%%

/* user subroutines */
int yywrap(){
return 1;
}
int yyerror(char *s)
{
fprintf(stderr,"%s\n",s);
}
int main()
{
yyin=freopen("input.txt","r",stdin);
yyout=freopen("output.txt","w",stdout);
yyparse();
}





