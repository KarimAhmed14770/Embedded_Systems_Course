#include <stdio.h>

/*converting a datatype into another is known as type casting or type-conversion*/

/*There are two types of casting:
1)implicit(automatic) casting: when the type conversion is performed automatically by the compiler without
programmer intervention
2)explicit casting:the programmer forces a type conversion when it would not normally happen
syntax: (type_name)expression */


/*implicit casting rules:
1)all char and short are converted into int Datatype or unsigned int in expression:
2)int->unsigned int->long->unsigned long->long long->unsigned long long->float->double->long double
if any operand is long double, all operands will be converted to long double and we will get our answer in long double
if any operand is double, all operands will be converted to double and we will get our answer in double
and etc..
note:if we go from a higher datatype to a lower data type it might cause loss of bits*/
float number=3.14;
int number2=55;
int main()
{
    printf("number = %0.2f \n",number);
    printf("number = %i \n",number);// here the compiler failed to cast the float into integer automatically
    printf("number = %i \n",(int)number);//here we make explicit casting to avoid the problem
   
    printf("number2 = %0.2f \n",number2);
    printf("number2 = %0.2f \n",(float)number2);

    return 0;
}
