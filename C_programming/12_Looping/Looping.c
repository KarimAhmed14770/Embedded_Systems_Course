#include <stdio.h>

/*in c programming we have three loops
1)for loop
2)while loop
3)do while loop*/

/*for loop:
for(expression1;expression2;expression3)
{
    BODY;
}
expression1 is the initialization, it may be 1 or more initialization
expression 2 is the condition
expression 3 is the iteration
first expression 1 is performed, then expression 2 is checked then the body is executed the expression 3 is executed
then back to check condition in expression 2 then body then expression 3 .... etc*/


/*while loop:
while(condition)
{
    body
}
as long as the condition is true, the body is executed, the condition is checked each iteration*/

/*do while:
do
{
    body
} while (condition);
the body is executed once before checking the condition*/


/*if you know the number of iterations foor the loop you should use for loop, if you want to iterate
on the basis of a condition then use while loop*/

/*Break and continue:
if break statement is executed inside a loop it termminates the loop imediately
break;
if continue statement is executed inside the loop, it starts a new iteration of the loop immediately*/
int main()
{

    /*calculate the sum of the first N natural numbers*/
    unsigned int sum=0;
    printf("enter the last number: \n");
    fflush(stdin); fflush(stdout);
    unsigned int n;
    scanf("%i",&n);
    int counter=0;
    for(counter=0; counter<=n;counter++)
    {
        sum+=counter;
    }
    printf("sum = %i \n",sum);
   /*infinite for loop
    for(;;)
    {
        printf("siiiiiiiiuuuuuuuuuuuuu\n");
    }*/

    return 0;
}