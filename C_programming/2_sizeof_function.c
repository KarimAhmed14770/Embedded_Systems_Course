#include <stdio.h>




int main()
{
    
    /*data types size is compiler dependent but char,short,long,long long, float,double,long double
    have constant size among compilers*/
    printf("size of char is %d Byte\n",sizeof(char));
    printf("size of short is %d Byte\n",sizeof(short));
    printf("size of long is %d Byte\n",sizeof(long));
    printf("size of long long is %d Byte\n",sizeof(long long));
    printf("size of float is %d Byte\n",sizeof(float));
    printf("size of double is %d Byte\n",sizeof(double));
    printf("size of long double is %d Byte\n",sizeof(long double));

}
