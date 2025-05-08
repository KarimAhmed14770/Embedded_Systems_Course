#include <stdio.h>

/*the conditional operator is a ternary operator so it takes three operands:
variable=(expression1)?(expression2):(expression3)
if expression1 is true then variable=expression2, else variable=expression3*/

unsigned short num1=1;
unsigned short num2=1;
unsigned int result;
int main()
{
    result=(num1==num2)?(11):(22);
    printf("result=%i\n",result);
    result=(num1!=num2)?(11):(22);
    printf("result=%i\n",result);
    return 0;
}