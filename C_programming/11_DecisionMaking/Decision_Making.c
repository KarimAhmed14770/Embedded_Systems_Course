#include <stdio.h>

/*In C programming we have three statements for decision making:
1)if-else statements
2)switch case statement 
3)goto statement*/

/*Note: C assumes any non zero or non null values as true, only zeroes and nulls are treated as false*/

/*if statement syntax:
if(condition)
    {
        if body
    }
    
else if(condition)
    {
        else if body
    }
        
    .
    .
    .
else
    {
        else body
    }*/

/*goto statement :
label:
    code
    
goto label;*/

/*switch statement
switch(expression)
{
    case value1:
    {
        body
    }
    break;

    case value2:
    {
        body
    }
    break;

    default:{body}
    break;
}*/
int main()
{
    /*find the largest number among three given numbers*/
    
    double n1,n2,n3;
    tryagain:
    printf("Enter three different numbers: ");
    fflush(stdin); fflush(stdout);
    scanf("%lf",&n1);
    scanf("%lf",&n2);
    scanf("%lf",&n3);
    if(n1>=n2 &&n1>=n3)
    {
        printf("the largest number is %0.2f \n",n1);
    }
    else if(n2>=n1 && n2>=n3)
    {
        printf("the largest number is %0.2f \n",n2);
    }
    else
    {
        printf("the largest number is %0.2f \n",n3);
    }

    printf("would you like to enter three more numbers?(y/n)");
    fflush(stdin); fflush(stdout);
    char c;
    scanf("%c",&c);
    if(c=='y' ||c=='Y')
    {
        goto tryagain;
    }
    else
    {

    }

    printf("enter a number between 1 to 4\n");
    unsigned char num;
    fflush(stdin); fflush(stdout);
    scanf("%i",&num);
    switch(num)
    {
        case 1:
        {
            printf("entry= 1\n");
        }
        break;

        case 2:
        {
            printf("entry= 2\n");
        }
        break;

        case 3:
        {
            printf("entry= 3\n");
        }
        break;

        case 4:
        {
            printf("entry= 4\n");
        }
        break;

        default:
        {
            printf("invalid number\n");
        }
    }

    return 0;
}