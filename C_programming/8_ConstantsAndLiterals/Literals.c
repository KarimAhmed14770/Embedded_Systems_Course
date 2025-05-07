#include <stdio.h>
/* Literals can be:
1) integer
2)floating-point
3)character
4)string
*/

/*integer Literals:can be decimal, octal or hexadecimal constant
a prefix specifies the base:
a)0x or 0X:for hexadecimals
b)0 for octals 
c)nothing for decimals

a suffix is a combination of U and L for unsigned and Long respectively
note:the same suffix can't be repeated but ll is long long and it is accepted*/
int main()
{
    /*integer Literals*/
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
   
    
   
    return 0;
}