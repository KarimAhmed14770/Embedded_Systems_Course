#include <stdio.h>
/*Types of Operators in C:
1)Arithmetic Operators:+,-,/,*,%,++,--
2)Relational Operators:>,<,>=,<=,==,!=
3)Logical Operators:&&,||,!
4)Bitwise Operators:<<,>>,^,&,|,~
5)Assignment Operators:=,+=,-=,/=,*=,%=,<<=,>>=,&=,|=,~=
6)Conditional Operator
7)sizeof Operator:sizeof()
*/

/******************************Arithmetic Operators*******************************/
unsigned char NumberOne=6,NumberTwo=2;
unsigned char Result;
int main()
{
    /******************************Arithmetic Operators*******************************/
    printf("\n\n******************************Arithmetic Operators******************************\n\n");
    Result=NumberOne+NumberTwo;     printf("Result=%i\n",Result);
    Result=NumberOne-NumberTwo;     printf("Result=%i\n",Result);
    Result=NumberOne*NumberTwo;     printf("Result=%i\n",Result);
    Result=NumberOne/NumberTwo;     printf("Result=%i\n",Result);
    Result=NumberOne%NumberTwo;     printf("Result=%i\n",Result);
    NumberOne++;                    printf("NumberOne=%i\n",NumberOne);
    ++NumberOne;                    printf("NumberOne=%i\n",NumberOne);
    NumberTwo++;                    printf("NumberTwo=%i\n",NumberTwo);
    ++NumberTwo;                    printf("NumberTwo=%i\n",NumberTwo);

    /*pre and post increment*/
    NumberOne=6; NumberTwo=2;
    Result=NumberOne++;             printf("Result=%i\n",Result);
    Result=++NumberOne;             printf("Result=%i\n",Result);
    Result=NumberOne--;             printf("Result=%i\n",Result);
    Result=--NumberOne;             printf("Result=%i\n",Result);
    /*1)pre-increment:
    a pre increment is used to increment the value of a variable before using it in expression.*/

    /*2)post-increment:
    post-increment is used to increment the value of a variable after using it in expression*/
    NumberOne=6; NumberTwo=2;
    printf("NumberOne=%i\n",NumberOne++); //expected ouptut is 6
    printf("NumberOne=%i\n",NumberOne); //expected ouptut is 7
    printf("NumberOne=%i\n",++NumberOne); //expected ouptut is 8
    //good trick
    NumberOne=6;
    NumberOne=NumberOne++;
    printf("NumberOne=%i\n",NumberOne); //expected ouptut is 6


    /******************************Relational Operators*******************************/
    printf("\n\n******************************Relational Operators******************************\n\n");
    NumberOne=6; NumberTwo=2;
    printf("Result=%i\n",NumberOne==NumberTwo);
    printf("Result=%i\n",NumberOne>NumberTwo);
    printf("Result=%i\n",NumberOne<NumberTwo);
    printf("Result=%i\n",NumberOne>=NumberTwo);
    printf("Result=%i\n",NumberOne<=NumberTwo);
    printf("Result=%i\n",NumberOne!=NumberTwo);

    /******************************Logical Operators*******************************/
    printf("\n\n******************************Logical Operators******************************\n\n");
    NumberOne=1; NumberTwo=0;
    printf("Result=%i\n",NumberOne&&NumberTwo);
    printf("Result=%i\n",NumberOne||NumberTwo);
    printf("Result=%i\n",!NumberOne);
    printf("Result=%i\n",!NumberTwo);
    printf("Result=%i\n",(!NumberOne)&&(NumberTwo));
    printf("Result=%i\n",(NumberOne)&&(!NumberTwo));
    return 0;

}
