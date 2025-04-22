#include <stdio.h>


/*in Memory everything is stored in binary format,but the way of presenting 
the same binary data might differ*/

char num1=0xFB; /*1111_1011*/
unsigned char num2=0xFB;/*1111_1011*/


int main()
{

    printf("num1: %c\n", num1);
    printf("num2: %c\n", num2);
    /*they both will give the same character because they have the same binary 
    and it is used for presenting character*/

    if(num1==num2)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }
    /*it will print no, because when the binary 1111_1011 is represented as signed char, it is 
    considered as 2's complement format which is -5, while unsigned char is seen as normal binary
    which is 251*/
    printf("num1: %d\n",num1);
    printf("num2: %d\n",num2);


}