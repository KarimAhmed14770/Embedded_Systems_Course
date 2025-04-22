#include <stdio.h>

char NumberOne=30,NumberTwo=40,NumberThree=10;

char num1=0xFB,num2=0xFB;


int main()
{
    /*integer promotion:data types like char or short int take less number of  bytes
    than int , these data types are automatically promoted to int or unsigned int when
    an operation is performed on them */
    char Result=(NumberOne*NumberTwo)/NumberThree;
    /*the expression NumberOne*NumberTwo is 1200 which is bigger than signed char capacity(-128,127)
    so integer promotion is done automatically and then the arithmetic operation is performed
    we get appropriate results without overflow*/
    printf("Result:%d\n",Result);

    /*Good trick*/


}
