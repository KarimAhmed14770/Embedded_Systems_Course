#include <stdio.h>
#include <stdlib.h>

unsigned char rows;
unsigned char rows_counter;
unsigned char cols_counter;
unsigned char a=0;
int main()
{
    /*******excercise 1***************/
    printf("enter number of rows\n");
    fflush(stdin);fflush(stdout);
    scanf("%i",&rows);
    for(rows_counter=0;rows_counter<rows;rows_counter++)
    {
        for (cols_counter=0; cols_counter<=rows_counter;cols_counter++)
        {
            printf("*");
        }
        printf("\n");
    }

    /*******excercise 2***************/
    printf("enter number of rows\n");
    fflush(stdin);fflush(stdout);
    scanf("%i",&rows);
    for(rows_counter=0;rows_counter<rows;rows_counter++)
    {
        for (cols_counter=0; cols_counter<=rows_counter;cols_counter++)
        {
            printf("%i ",(cols_counter+1));
        }
        printf("\n");
    }


    /*******excercise 3***************/
    printf("enter number of rows\n");
    fflush(stdin);fflush(stdout);
    scanf("%i",&rows);
    for(rows_counter=0;rows_counter<rows;rows_counter++)
    {
        for (cols_counter=0; cols_counter<=rows_counter;cols_counter++)
        {
            printf("%c ",((int)'A')+cols_counter);
        }
        printf("\n");
    }


    /*******excercise 4***************/
    printf("enter number of rows\n");
    fflush(stdin);fflush(stdout);
    scanf("%i",&rows);
    for(rows_counter=0;rows_counter<rows;rows_counter++)
    {
        for (cols_counter=rows_counter; cols_counter<rows;cols_counter++)
        {
            printf("*");
        }
        printf("\n");
    }

    /*******excercise 5***************/
    printf("enter number of rows\n");
    fflush(stdin);fflush(stdout);
    scanf("%i",&rows);
    for(rows_counter=0;rows_counter<rows;rows_counter++)
    {
        a=0;
        for (cols_counter=rows_counter; cols_counter<rows;cols_counter++)
        {
            printf("%i ",++a);
        }
        printf("\n");
    }

    /*******excercise 6***************/
    printf("enter number of rows\n");
    fflush(stdin);fflush(stdout);
    scanf("%i",&rows);
    for(rows_counter=0;rows_counter<rows;rows_counter++)
    {
        for (cols_counter=0; cols_counter<((rows*2)-1);cols_counter++)
        {
            if((cols_counter>=rows-(rows_counter+1)) && (cols_counter<=rows+(rows_counter-1)))
            {
                printf("*");
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    /*******excercise 7***************/
    printf("enter number of rows\n");
    fflush(stdin);fflush(stdout);
    scanf("%i",&rows);
    a=1;
    unsigned char mid_index=((rows*2)/2)-1;
    for(rows_counter=0;rows_counter<rows;rows_counter++)
    {
        for (cols_counter=0; cols_counter<((rows*2)-1);cols_counter++)
        {
            if((cols_counter>=rows-(rows_counter+1)) && (cols_counter<=rows+(rows_counter-1)))
            {
               printf("%i",(a)+(abs((mid_index-cols_counter))));
            }
            else 
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}