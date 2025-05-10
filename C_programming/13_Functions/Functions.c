#include <stdio.h>
/*Functions:
*a function is a set of statements that together perform a specific task
*every c program consists of one or more functions
*the main function is mandatory for the c program because it is the entry point of your c code
from where the program starts execution

Function Advantages:
a)the function increases modularity of a program:a large problem can be divided into sub-problems
and then solved by using functions
b)the function increases reusability because functions are reusable: once you have created a function 
you can call it anywhere in the program without copying and pasting entire logic
no need for writing the same code again and again
c) it makes the program more maintainbale:if you want to modify the program later, you onlu need 
to update your function without changing the base code
*/

/*Types of Functions:
1)Library Function
2)user-defined Function*/

/*Function Definition:
syntax:
return_type function_name(type1 argument1,type2 argument2,..etc)
{
    function body
    {
        local variables;
        function statements;
        return (expression);
    }
}
the first line is known as the function header,it represents the signature of the function and
consists of return_type,function_name and function arguments list
* a function that doesn't return anything its type is void
arguments are called parameters when they are passed to the function in the function call
if a function has no arguments the parenthesis takes void in the function_header
if you don't write void and left the parenthesis empty, you may pass a value and not get a compiler error
*/

/*Function Declaration(prototype):

void print_hello(void); this is a function declaration, but it is not defined yet

giving a parameter name in function declaration is optional,
but it is necessary to give a name in the function definition

ex: void print_array(int, int*);
int main()
{
    main body
}

void print_hello(void)
{
    printf("Hello\n");
} this is the function definition

it is a convention in c or cpp to write function prototypes above the main, 
and function definitions below the main function

void print_array(int size, int *array)
{
    for(int i=0;i<size;i++)
    {
        printf("element(%i)= %i \n",i,array[i]);
    }
}
*/

void print_hello()
{
    printf("Hello\n");
}

void print_array(unsigned int,unsigned int*);

unsigned int size=5;
unsigned int x[5]={1,2,3,4,5};
int main()
{
    print_hello(20,30);//here you passed a parameter to a void parameter function
    //to avoid this sitiuation, write void inside the parenthesis of the definition,declaration
    print_array(size,x);
    return 0;
}

void print_array(unsigned int size,unsigned int* array)
{
    for(int i=0;i<size;i++)
    {
        printf("element(%i)= %i \n",i,array[i]);
    }
}