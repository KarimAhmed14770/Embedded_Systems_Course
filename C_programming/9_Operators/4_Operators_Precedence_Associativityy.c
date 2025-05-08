#include <stdio.h>

/*operators precedence and associativity determines how an expression is evaluated

1)Postfix operators: () (function call), [] (array subscript), . (member access), -> (pointer member access), ++ (postfix increment), -- (postfix decrement)
2)Unary operators: + (unary plus), - (unary minus), ! (logical NOT), ~ (bitwise NOT), ++ (prefix increment), -- (prefix decrement), * (dereference), & (address-of),   
3)sizeof
4)Multiplicative operators: * (multiplication), / (division), % (modulus)
5)Additive operators: + (addition), - (subtraction)
6)Shift operators: << (left shift), >> (right shift)
7)Relational operators: < (less than), <= (less than or equal to), > (greater than), >= (greater than or equal to)   
8)Equality operators: == (equal to), != (not equal to)
9)Bitwise AND operator: &
10)Bitwise XOR operator: ^
11)Bitwise OR operator: |
12)Logical AND operator: &&
13)Logical OR operator: ||
14)Conditional operator (ternary operator):   
?:*/
unsigned int Num1;
int main()
{

    Num1=100+200/10-3*10; //multiplicative(*,/) has higher precedence than addidtive(+-) so we start by * or /
    //associativity of multiplicative is left to right so we start with the operator at left
    //this is performed as :Num1=100+20-3*10 then Num1=100+20-30 then Num1=120-30 then Num1=90
    printf("Num1=%i\n",Num1);
    
    /*the parrentheses has the highest precedence , you can use it to control how the expression is evaluated*/
    return 0;
}
