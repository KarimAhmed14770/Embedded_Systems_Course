#include <stdio.h>

/*Constants Refer to fixed values that the program may not alter during its execution
  Constants can be any of the basic datatypes*/

//Constants are defined using const qualifier and not Const


/*Global constants values' can't be changed in the program*/
/*Global Constant Definition:*/
const unsigned int Number=5;

// if you try to change the value of a global constant you will face compiler error(assignment of read-only variable)
int main()
{
   
   /*local contants values can be changed indirectly using pointers*/
   /*Local Constant Definition:*/
   const unsigned char length=10;
   printf("Length=%i\n",length);
   //length =11; //will not work and you will face compiler error(assignment of read-only variable)
   //you can change it indirectly using pointers
   unsigned char *ptr=&length;
   *ptr=11;
   printf("Length=%i\n",length);
    return 0;
}