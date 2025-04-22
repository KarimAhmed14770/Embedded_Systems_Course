#include <stdio.h>

unsigned char num1;
/*unintialized global variables takes a value of 0*/

/*initializing single variable*/
unsigned num2=40;

/*initializing list of variables*/
unsigned char Number1=50,Number2=60,Number3=70;
unsigned short Number4=1102,Number5=1000,Number6=500;
signed int Number10=500,Number11=600,Number12=800;
float Number7=7000,Number8=30000,Number9=20000;

/*Data type of a variable determines three things
1)the size and layout of the variable in memory
2)the range of values(+ve or -ve) that can be stored within that memory
3)the set of operations that can be applied to the variable*/
int main()
{
    /*uninitialized local varibales takes garbage value*/
    unsigned char num2;
    printf("num1: %d\n",num1);
    printf("num2: %d\n",num2);
    printf("Number1:%d ,its size:%d Bytes\n",Number1,sizeof(Number1));
    printf("Number4:%d ,its size:%d Bytes\n",Number1,sizeof(Number4));
    printf("Number7:%d ,its size:%d Bytes\n",Number1,sizeof(Number7));
    printf("Number10:%d ,its size:%d Bytes\n",Number1,sizeof(Number10));

}
