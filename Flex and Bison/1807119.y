/*c declaration*/
%{
#include<stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>
# include <math.h>
struct {
float tfloat;
int tint;
char *tstr;
}store[900];
int yylex(void);
int indexx=0;
%}
/*bison declare */
%union
{
int iv;
float fv;
char *sv;
}
%token INT CHAR FLOAT LB st et floattracker  RB LP RP CM SM MAIN_FUNC ASSIGN PLUS MINUS MULT DIV GT LT Loop SWITCH CASE DEFAULT SHOW CC IF ELSE eo Multiply SUM IEC WHILE Prime powerf division YEAR pal FACTORIAL trigo sine cose tane incre decre lteq gteq and or equal notequal 
%token<sv> VARIABLE
%token<fv> NFLOAT
%token<iv> NINT
%type <iv> expre 
%type <fv> floatv
%nonassoc IF
%nonassoc ELSE
%right ASSIGN equal notequal
%left and or
%left LT GT lteq gteq  
%left PLUS MINUS
%left MULT DIV
%right incre decre
/*simple gram rules*/
%%
program: MAIN_FUNC st et LB firststatement RB    { printf("\n~~Successfully COMPILED~~\n"); }
;

firststatement :  
|firststatement declaration
|firststatement assignop SM
|firststatement  secondstatement 
;

declaration : TYPE ID SM { printf("\n...... Valid declaration...... \n"); }
;
TYPE :INT 
| FLOAT 
|CHAR
;
ID : ID CM id1 
|id1
;
id1:VARIABLE { int f=0,k=0;

for(k=0;k<indexx;k++)
{
if(strcmp(store[k].tstr,$1)==0)
{
printf("\n %s  var is declared! use another variable name \n",store[k].tstr);
f=1;
break;
}
}
if(f==0)
{
 
  store[indexx].tstr=$1;
printf("%s var is decalred successfully \n",store[indexx].tstr);
indexx++;
}
}
|VARIABLE ASSIGN NFLOAT { int f=0,k=0;

for(k=0;k<indexx;k++)
{
if(strcmp(store[k].tstr,$1)==0)
{
printf("\n %s float type var is declared! use another variable name \n",store[k].tstr);
f=1;
break;
}
}
if(f==0)
{
store[indexx].tstr=$1;
store[indexx].tfloat=$3;
printf("\n value of var %s=%f\t %d\n",store[indexx].tstr,store[indexx].tfloat);
indexx++;
}
 }
|VARIABLE ASSIGN NINT { int f=0,k=0;

for(k=0;k<indexx;k++)
{
if(strcmp(store[k].tstr,$1)==0)
{
store[k].tint=$3;
printf("\n %s integer type var is declared! use another variable name \n",store[k].tstr);
f=1;
break;
}
}
if(f==0)
{
store[indexx].tstr=$1;
store[indexx].tint=$3;
printf("\n value of var %s=%d\n",store[indexx].tstr,store[indexx].tint);
indexx++;
}
 }
;
assignop: assignop CM assign
|assign
;
assign:VARIABLE ASSIGN NFLOAT {
int f=0,k=0;
for(k=0;k<indexx;k++)
{
if(strcmp(store[k].tstr,$1)==0)
{
store[k].tfloat=$3;
printf("\n value of var %s=%f \n",store[k].tstr,store[k].tfloat);
f=1;
break;
}
}
if(f==0)
{
printf("\n Error!var is not declared \n");
}
 }
|VARIABLE ASSIGN NINT {
int f=0,k=0;
for(k=0;k<indexx;k++)
{
if(strcmp(store[k].tstr,$1)==0)
{
store[k].tint=$3;
printf("\n value of var %s=%d \n",store[k].tstr,store[k].tint);
f=1;
break;
}
}
if(f==0)
{
printf("\n Error!var is not declared \n");
}
 }
;
secondstatement : SM
| expre SM { printf("\n Value of expression : %d \n",$1); }
|floatv SM { printf("\n Value of expression : %f \n",$1); }
| SWITCH LP expre RP LB CASE expre CC SHOW LP expre RP SM  CASE expre CC  SHOW LP expre RP SM  DEFAULT CC  SHOW LP expre RP SM   RB
{
if($7==$3)
{
printf("\n value in switch: %d\n",$11);
}
else if($15==$3)
{
printf("\n value in switch:%d\n",$19);
}
else{
printf("\n value in switch:%d\n",$26);
}
}
| SWITCH LP expre RP LB CASE expre CC SHOW LP expre RP SM CASE expre CC SHOW LP expre RP SM  CASE expre CC  SHOW LP expre RP SM  DEFAULT CC  SHOW LP expre RP SM   RB
{
if($7==$3)
{
printf("\n value in switch: %d\n",$11);
}
else if($15==$3)
{
printf("\n value in switch:%d\n",$19);
}
else if($23==$3){
printf("\n value in switch:%d\n",$27);
}
else{
printf("\n value in switch:%d\n",$34);
}
}
| SWITCH LP expre RP LB CASE expre CC SHOW LP expre RP SM CASE expre CC SHOW LP expre RP SM  CASE expre CC  SHOW LP expre RP SM  CASE expre CC  SHOW LP expre RP SM  DEFAULT CC  SHOW LP expre RP SM   RB
{
if($7==$3)
{
printf("\n value in switch: %d\n",$11);
}
else if($15==$3)
{
printf("\n value in switch:%d\n",$19);
}
else if($23==$3){
printf("\n value in switch:%d\n",$27);
}
else if($31==$3){
printf("\n value in switch:%d\n",$35);
}
else{
printf("\n value in switch:%d\n",$42);
}
}
|eo st expre et SM  {
	       int  n=$3;   

			if(n%2==0){
			printf(" %d is an even number \n",$3);
}
else{
printf(" %d is an odd number \n",$3);

}


	     }

|Multiply st expre CM expre et SM {
int n=$3;
int rem=$5;
int mul=1,i;

			for(i=n;i<=rem;i++){
	                                 mul*=i;			
			}
		
			printf("Multiplication from %d to %d is: %d\n", $3, $5,mul);
}
|SUM st expre CM expre et SM  {
	         int n=$3;
int rem=$5;
int f=0,i;

			for(i=n; i<=rem; i++)
			{
				f+=i;			
			}
			printf("Summation from %d to %d is: %d\n", $3, $5,f);
	     }
|IF LP expre RP LB expre SM RB
{
 if($3)
     { 
       printf("\n Value of expression in EITHER BLOCK : %d\n",$6);
    }
 else
    {
      printf("\n Condition value zero in EITHER BLOCK \n");
    }
}
|IF LP expre RP LB expre SM RB ELSE LB expre SM RB{

 if($3) 
   {
    printf("\n Value of expression in EITHER BLOCK : %d\n",$6);
   }
 else
   { 
     printf("\n Value of expression in OR BLOCK : %d\n",$11);
   }
}
|IF LP expre RP LB expre SM RB IEC LP expre RP LB expre SM RB ELSE LB expre SM RB{

 if($3) 
   {
    printf("\n Value of expression in EITHER BLOCK : %d\n",$6);
   }
 else if($11)
   { 
     printf("\n Value of expression in OTHERWISE BLOCK : %d\n",$14);
   }
else{
printf("\n Value of expression in OR BLOCK : %d\n",$19);
}
}	     
|Loop list
| WHILE LP expre LT expre RP LB  expre ASSIGN expre PLUS expre RB  { 

int n=$12;
int f=$10;
int o;
if(f<$5){
while(f<$5){
  f=f+2;
 printf("\n Value of expression in WHILE BLOCK : %d\n",f);
}
}
for(o=0;o<indexx;o++){
if($10==store[o].tint){
store[o].tint=f;
break;
}
}
}
|Prime st expre et SM {
int n=$3;
int primen=0,i;
for(i=2;i<n;i++){
	                                 if(n%i==0){
primen=1;
break;

}			
			}
			if(n==1){
			printf("%d is neither a  prime number nor a composite \n", $3);
}
else if(primen==0){
printf("%d is a prime number \n", $3);
}
else{
printf("%d is not a prime number \n", $3);
}
}
|powerf st expre CM expre et SM {
int n=$3;
int rem=$5;
			
			printf("%d ^ %d = %lf\n", $3, $5,pow(n,rem));
}
|FACTORIAL st expre et SM  {
	        int n=$3,i,fac=1;   

			for(i=n; i>=2; i--)
			{
				fac*=i;			
			}
			
			printf("Factorial of %d : %d\n",$3,fac);
	     }	
|YEAR st expre et SM {
if($3 % 4==0){
printf("\n %d is a leap year \n", $3);
}
else{
printf("\n %d is not a leap year \n",$3);
}
}
|pal st expre et SM
{
int originalN = $3,rem,reversedN=0;
while ($3 != 0) {
        rem = $3 % 10;
        reversedN = reversedN * 10 + rem;
        $3 /= 10;
    }

   
    if (originalN == reversedN)
        printf("%d is a palindrome.", originalN);
    else
        printf("%d is not a palindrome.", originalN);

}
|division   st expre CM expre et SM {
int n; 
if($5!=0)
    {
     n = $3 / $5;
printf("\n result of divison : %d\n",n);
   }
  else
    {
     n = 0;
     printf("\n divide by 0\t");
    }
}
|SHOW LP expre RP SM {printf("Print exp %d\n",$3);}
|SHOW LP floatv RP SM {printf("Print exp %f\n",$3);}
|trigo st angle et  SM 
;
list:LP expre CM expre RP LB expre ASSIGN expre MULT expre RB {
int n=$2;
int rem=$4;
int l=$9;
int r=$11;
int k=$7,o,p;
for(p=n;p<=rem;p++){	
k=k*$11;

	                                 printf("value of the loop: %d\n", k);	
}
for(o=0;o<indexx;o++){
if($7==store[o].tint){
store[o].tint=k;
break;
}
}
}
|LP expre CM expre RP LB expre ASSIGN expre PLUS expre RB {
int n=$2;
int rem=$4;
int l=$9;
int r=$11;
int k=$7,o,p;
for(p=n;p<=rem;p++){	
k=k*$11;

	                                 printf("value of the loop: %d\n", k);	
}
for(o=0;o<indexx;o++){
if($7==store[o].tint){
store[o].tint=k;
break;
}
}
}
;
angle : sine LP expre RP   {
	           

			
			printf("Sine of %d  degree is :%lf \n",$3,sin($3*3.1416/180));
}
|cose LP expre RP   {
	           

			
			printf("CoSine of %d  degree is :%lf \n",$3,cos($3*3.1416/180));
}
|tane LP expre RP   {
	           

			
			printf("Tangent of %d  degree is :%lf \n",$3,tan($3*3.1416/180));
}
;
floatv:NFLOAT {store[indexx].tfloat=$1;
$$=store[indexx].tfloat;
indexx++;
}
|VARIABLE  floattracker{ int j=0,f=0;
for(j=0;j<indexx;j++)
{
if(strcmp(store[j].tstr,$1)==0)
{
$$=store[j].tfloat;
f=1;
break;
}
}
if(f==0)
{
printf("\n var is not declared \n");
}
 } 
|floatv PLUS floatv { $$ = $1 + $3; }
|floatv MINUS floatv { $$ = $1 - $3; }
|floatv MULT floatv { $$ = $1 * $3; }
|floatv DIV floatv {
  if($3)
    {
     $$ = $1 / $3;
   }
  else
    {
     $$ = 0;
     printf("\n divide by 0\t");}
    }
|floatv LT floatv { $$ = $1 < $3; }
|floatv GT floatv { $$ = $1 > $3; }
|LP floatv RP   { $$ = $2; }
|floatv incre  {$$ = $1 + 1;}
|floatv decre   {$$ = $1 - 1;}
|floatv lteq floatv {$$ = $1 <= $3;}
|floatv gteq floatv {$$ = $1 >= $3;}
|floatv or floatv {$$ = $1 || $3;}
|floatv and floatv {$$ = $1 && $3;}
|floatv equal floatv {$$ = $1 == $3;}
|floatv notequal floatv {$$ = $1 != $3;}
;
expre :NINT {store[indexx].tint=$1;
$$=store[indexx].tint;
indexx++;
}
|VARIABLE   { int j=0,f=0;
for(j=0;j<indexx;j++)
{
if(strcmp(store[j].tstr,$1)==0)
{
$$=store[j].tint;
f=1;
break;
}
}
if(f==0)
{
printf("\n var is not declared \n");
}
 } 
|expre PLUS expre { $$ = $1 + $3; }
|expre MINUS expre { $$ = $1 - $3; }
|expre MULT expre { $$ = $1 * $3; }
|expre DIV expre {
  if($3)
    {
     $$ = $1 / $3;
   }
  else
    {
     $$ = 0;
     printf("\n divide by 0\t");}
    }
|expre LT expre { $$ = $1 < $3; }
|expre GT expre { $$ = $1 > $3; }
|LP expre RP   { $$ = $2; }
|expre incre {$$ = $1 + 1;}
|expre decre  {$$ = $1 - 1;}
|expre lteq expre {$$ = $1 <= $3;}
|expre gteq expre {$$ = $1 >= $3;}
|expre or expre {$$ = $1 || $3;}
|expre and expre {$$ = $1 && $3;}
|expre equal expre {$$ = $1 == $3;}
|expre notequal expre {$$ = $1 != $3;}
;
%%
