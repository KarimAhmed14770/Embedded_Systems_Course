#include <stdio.h>



/*************** example 7**********************/
int f1(){printf("Karim "); return 1;}
int f2(){printf("Ahmed ");return 1;}
int main()
{
   /*************** example 1**********************/
   int i=5,j=10,k=15;
   printf("%d",sizeof(k/=i+j));
   printf("%d",k);
   /*the expression inside the sizeof operator does not get evaluated, it only sees that the outcome
   is int and returns the size of int, so the expeccted output is 415*/
   printf("\n");

   /*************** example 2**********************/
    /*int a=1,2,3; 
    printf("%d",a);*/
    /*the compiler expects an identifier after the comma
    it finds 2 which is not an identifier so it gives syntax error*/

    /*************** example 3**********************/
    int a;
    a=1,2,3; /*the comma acts as an operator here, the assignment operator (=) has higher precedence
    so a=1 gets performed at first,the expression is evaluated to (a=1),2,3 so as is assigned 1*/
    printf("%d\n",a);
    /*compare example 2 to example 3*/

    /*************** example 4**********************/
    int b=(1,2,3);
    /*the parenthesis have higher precedence than the assignment operator
    the comma operator associativity is from left to right, so the last number will be assigned to b */
    printf("%d\n",b);

    /*************** example 5**********************/
    printf("%d \n",1<<2+3<<4);
    /*addition has higher precedence than binary shift left so 1<<5<<4, shift-left associativity is 
    left to right so (1<<5)<<4 which is 32<<4 =512*/

    /*************** example 6**********************/
    printf("%d \n",sizeof(printf("Karim is here")));
    /*the expression inside sizeof does not get evaluated so "karim is here" will not be typed
    printf returns the number of characters to be printed which is int , sizeof(int) is 4*/

    /*************** example 7**********************/
    int p=f1()+f2();/*the output here is compiler dependent because '+' operator doesn't
    have a standard defined order of evaluation for its operands
    so the compiler may choose to type Karim Ahmed or Ahmed Karim*/

    /*************** example 8**********************/
    int y=0;
    int x=(~y==1);
    printf("\n%d\n",x);
    /*bitwise not has higher precedence than equal to ==, y is int stored in 4 bytes so, y=0x0000 ~y=0xFFFF which is not 
    equal to 1 so the output is zero */

    /*************** example 9**********************/
    int ab=0; int ba=0; 
    ab=((ab==(ab==1))); //parenthesis is the higher precedence, so ab==1 returns 0, and then ab==0 returns 1 , so ab =1
    printf("%d\n",ab);

    /*************** example 10**********************/
    int xx=10;
    int yy=20;
    xx+=yy+=10; /*unary and assignment operators associativity is from right to left
    so the expression evaluates to xx+=(yy=yy+10); xx+=30; xx=40 , yy=30*/
    printf("%d %d \n",xx,yy);

    /*************** example 11**********************/
    int xxx=10;
    int yyy=(xxx++,xxx++,xxx++);
    /*first xxx++ is performed and xxx is 11, then xxx++ is performed an then xxx =12 then the last
    xxx is assigned to yyy, so that yyy=12 because of the post increment and xxx=13*/
    printf("%d %d\n",xxx,yyy);

    return 0;
}
