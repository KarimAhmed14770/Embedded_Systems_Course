#include <stdio.h>
/* Literals can be:
1) integer
2)floating-point
3)character
4)string
*/

/*1) integer Literals:can be decimal, octal or hexadecimal constant
a prefix specifies the base:
a)0x or 0X:for hexadecimals
b)0 for octals 
c)nothing for decimals

a suffix is a combination of U and L for unsigned and Long respectively
note:the same suffix can't be repeated but ll is long long and it is accepted*/

/*2) floating-point literals:a floating point literal has an integer part, a decimal point , a fractional part and an exponent part
you can represent floating point literals either in decimal form or in exponential form
a)decimal point representation: you must include the integer part,decimal point and the fractional part
b)exponential form:you must include the integer part and the exponent part, the signed exponent is introduced by e or E
note suffix f indicates float*/

/*3)character Literals: character literls are enclosed in single quotes*/
/*3)string Literals: character literls are enclosed in single quotes*/
int main()
{
    /*integer Literals*/
    printf("%i\t %0X\t %0x\t %i\t %i\t %i\t %i\t %i\t %i\t %i\n ",20,0Xffee,0xAB,07,0712,1500l,1200ul,200u,20lu,20ll);
    unsigned int Number1=20;
    unsigned int Number2=0Xffee;
    unsigned int Number3=0xAB;
    unsigned int Number4=07;
    unsigned int Number5=0712;
    unsigned int Number6=1500l;
    unsigned int Number7=1200ul;
    unsigned int Number8=200u;
    unsigned int Number9=20lu;
    unsigned int Number10=20ll;
    /*not accepted
    unsigned int Number1=20uu;
    unsigned int Number10=20lll;
    unsigned int Number10=09;
    unsigned int Number10=0xG;
    */

    /*floating-point Literals*/
    printf("%f\t %f\t %f\t %f\t %f\t %f\n",20.45,20.45f,20.0,2045e-2,2045E-2,2045E-2f);
    float Num1=20.45;
    float Num2=20.45f;
    float Num3=20.0;
    float Num4=2045e-2;
    float Num5=2045E-2;
    float Num6=2045E-2f;

    /*not accepted
    float Number1=.45;no integer
    float Number10=20e;no exponent part
    float Number10=210f; no decimal or fraction
    float Number10=20.;no fraction part
    */
   
    /*character Literals*/
    printf("%c\n",'x');
    
    /*string literals:*/
    printf("%s\n","Karim Ahmed Hamdy");
    char x[30]="Karim Ahmed Hammdy";
    printf("%s\n",x);

   
    return 0;
}