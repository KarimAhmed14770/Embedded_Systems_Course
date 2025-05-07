#include <stdio.h>


/*errors:
1) Syntax errors
2) Run-Time error
3) Linker Error
4) Logical Error
5) Semantic Error*/



/*errors are also known as Bugs or Faults, they are detected during compilation or execution*/

int main()
{
    /*1) syntax errors: errors that occur in compilation time due to typing mistakes or not following the language syntax*/
   
    //unsignd int num1; typing mistake
    //int 1student; wrong syntax

    /*2) Run-Time error:errors that occur during execution time even after successful compilation*/
    /*when the program is running and is not able to perform an operation*/
    //example : 
    
     /*
        unsigned int num1=30;
        unsigned int num2=0;
        unsigned int num3=num1/num2; 
        printf("num3 %i\n",num3);
        //dividing by zero
    */

    /*3) Linker Error: Linker errors are mainly generated when the executable file of the program is not created
    */

    /*4) Logical Error:an error that leads to an undesired output, it is related to the logical thining oa a developer*/
    //example
    unsigned int Number=0;

    for (Number=0;Number<=5;Number++);
    {
        printf("%i,",Number);
    }
    printf("\n");
    /*the developer wanted to print 1,2,3,4,5,6 but he ended printing 6, this is a logical error*/
    /*5) Semantic Error:are the errors that occured when the statements are not understandale by the compiler, 
    they are also detected 
    in compilation time.
    a) the use of unitialized variable
    b) error in expression
    c) array index out of bound
    d)type compatability

    */
   
   unsigned int Num;
   Num=Num+2;

   /*unsigned int num1,num2,num3;
   num1+num2=num3;*/
   
  unsigned int a[10];
  a[50]=90;

  unsigned int num="hello";

    return 0;
}