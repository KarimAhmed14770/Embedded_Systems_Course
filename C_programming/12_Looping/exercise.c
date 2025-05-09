#include <stdio.h>
#include <stdlib.h>

/*the best way to solve patterns is visualing it and to have this info
unsigned char rows;
unsigned char rows_index;
unsigned char cols_index;
unsigned char mid_index;
unsigned char cols;
ready before starting
 */
unsigned char rows;
unsigned char rows_index;
unsigned char cols_index;
unsigned char a;
unsigned char mid_index;
unsigned char cols;

int main()
{
    /*******excercise 1***************/
    printf("excercise 1:enter number of rows\n");
    fflush(stdin);fflush(stdout);
    scanf("%i",&rows);
    cols=rows;
    for(rows_index=0;rows_index<cols;rows_index++)
    {
        for (cols_index=0; cols_index<=rows_index;cols_index++)
        {
            printf("*");
        }
        printf("\n");
    }

    /*******excercise 2***************/
    printf("excercise 2:enter number of rows\n");
    fflush(stdin);fflush(stdout);
    scanf("%i",&rows);
    cols=rows;
    for(rows_index=0;rows_index<cols;rows_index++)
    {
        for (cols_index=0; cols_index<=rows_index;cols_index++)
        {
            printf("%i ",(cols_index+1));
        }
        printf("\n");
    }


    /*******excercise 3***************/
    printf("excercise 3:enter number of rows\n");
    fflush(stdin);fflush(stdout);
    scanf("%i",&rows);
    cols=rows;
    for(rows_index=0;rows_index<cols;rows_index++)
    {
        for (cols_index=0; cols_index<=rows_index;cols_index++)
        {
            printf("%c ",((int)'A')+cols_index);
        }
        printf("\n");
    }


    /*******excercise 4***************/
    printf("excercise 4:enter number of rows\n");
    fflush(stdin);fflush(stdout);
    scanf("%i",&rows);
    cols=rows;
    for(rows_index=0;rows_index<cols;rows_index++)
    {
        for (cols_index=rows_index; cols_index<rows;cols_index++)
        {
            printf("*");
        }
        printf("\n");
    }

    /*******excercise 5***************/
    printf("excercise 5:enter number of rows\n");
    fflush(stdin);fflush(stdout);
    scanf("%i",&rows);
    cols=rows;
    for(rows_index=0;rows_index<rows;rows_index++)
    {
        a=0;
        for (cols_index=rows_index; cols_index<cols;cols_index++)
        {
            printf("%i ",++a);
        }
        printf("\n");
    }

    /*******excercise 6***************/
   printf("excercise 6:enter number of rows\n");
    fflush(stdin);fflush(stdout);
    scanf("%i",&rows);
    cols=1+(((rows-1)*2)*2);
    mid_index=cols/2;
    for(rows_index=0;rows_index<rows;rows_index++)
    {
        for(cols_index=0;cols_index<cols;cols_index++)
        {
            if((cols_index%2==0)&&
            ((cols_index>=(mid_index-(2*rows_index))) && (cols_index<=(mid_index+(2*rows_index)))))
            {
                printf("*");
            }
            else
            printf(" ");
        }
        printf("\n");
    }
     
     /*******excercise 7***************/
   printf("excercise 7:enter number of rows\n");
    fflush(stdin);fflush(stdout);
    scanf("%i",&rows);
    cols=1+(((rows-1)*2)*2);
    mid_index=cols/2;
    a=1;
    for(rows_index=0;rows_index<rows;rows_index++)
    {
        for(cols_index=0;cols_index<cols;cols_index++)
        {
            if((cols_index%2==0)&&
            ((cols_index>=(mid_index-(2*rows_index))) && (cols_index<=(mid_index+(2*rows_index)))))
            {
                if(cols_index==mid_index)
                {
                    printf("%i",a+(2*rows_index));
                }
                else
                {
                    printf("%i",(a+(2*rows_index))-abs((mid_index-cols_index)/2));   
                }
            }
            else
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}

