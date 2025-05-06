#include <stdio.h>


/*Global variable definition*/
unsigned int Num1; /*this is variable definition because it allocates a memory for an unsigned int*/
float Num2=90; /*this is variable definition because it allocates a memory for a float*/

/*Note:
unintialized global variables take value of zero or NULL
*/

/*variable declaration*/
/*the keyword extern: tells the compiler that there is a variable with an identifier name ... but
it does not define it , the definition will be in another file, and the linker will be responsible for
grabbing the definition after compiling */

/*we use extern and declare the variable in this file , so we can use it in this file*/
extern unsigned short var_declared;
int main()
{
   /*Local variable definition*/
unsigned int Num3; /*this is variable definition because it allocates a memory for an unsigned int*/
float Num4=90; /*this is variable definition because it allocates a memory for a float*/
/*Note:
unintialized Local variables take garbage value
*/
printf("var_declared=%d\n",var_declared);

}
