#include <stdio.h>

/*****************Bits and Bytes*****************************/
/*
*a bit represents a single binary digit, it can have a value of 0 or 1
*a bit is the smallest piece of information a computer can store
*a byte is a group of 8 bits
*a byte can be used to represent an 8 digit binary number which can store 256 different values
values between 0 to 255 for decimal system
and 0x00 to 0xFF for hexadecimal system
*a Byte can also be used to represent a characte using ASCII coding
*it can also be used to represent an instruction in a machine code computer program
*computer memory is organized in Bytes, a Bytes is the smallest amount of data a computer can 
write to or read from, in a similar way files are also organized in Bytes
*You can't read ir write individual bits in memory
*A nibble is similar to byte but has 4 bits rather than 8, it was used in old processors
*Two Bytes can be combined to create a 16-bit word(WORD), 4 bytes can be combined to create a 32-bit word(Dword)
eight bytes can be combined to create a 64-bit word(LWORD)
*/


/******************************Bitwise Operators***************************/

 /*Bitwise Operators:
 1)Bitwise And:&
 2)Bitwise Or:|
 3)Bitwise Not:~
 4)Bitwise XOR:^
 5)Bitwise shift-left:<< multiplies the number by 2^shift-left value
 6)Bitwise shift-right:>>multiplies the number by 2^-shift_right value
 */


 unsigned char NumberOne=60;//0x3C,0011 1100
 unsigned char NumberTwo=13;//0xD, 0000 1101
 unsigned char NumberThree;//0x3C,0011 1100


/**************************************Bitfields***********************************/
/*often a byte is used to store a number value, but sometimes we are nire interested in the individual bits within a byte
*like in microcontroller interfacing, if a register is 8bit , each bit corresponds to a certain property in the register
Bitfields are the basis of emmbedded systems.
a bit mask:A bit mask is used to mask out unwanted bits in a byte and just keeps the one you need
*/
#define BIT_NUMBER1 (0)
#define BIT_NUMBER2 (7)
#define BIT_NUMBER3 (5)
#define BIT_NUMBER4 (1)
int main()
{
    /******************************Bitwise Operators***************************/

    printf("\n\n******************************Bitwise Operators******************************\n\n");
    printf("Result=0x%x\n",NumberOne&NumberTwo);//0000 1100 0x0C
    printf("Result=0x%x\n",NumberOne|NumberTwo);//0011 1101 0x3D
    printf("Result=0x%x\n",NumberOne^NumberTwo);//0011 0001 0x31
    printf("Result=0x%x\n",(~NumberOne));//1100 0011 0xC3, take care of integer promotion
    NumberThree=~NumberOne;
    printf("Result=0x%x\n",NumberThree);
    printf("Result=0x%x\n",~NumberTwo);//1111 0010 0xF2
    printf("Result=0x%x\n",NumberOne>>2);//0000 111 0X0F
    printf("Result=0x%x\n",NumberTwo<<2);//0011 0100 0x38

    /**************************************Bitfields***********************************/

    printf("\n\n******************************Bitfields******************************\n\n");
    /*Bitmask using and:
    problem: you want to find the least significant hexadecimal digit in a given number*/
    unsigned char Bit_mask=0x0F;
    unsigned int num=0XFCAD;//here the least significat hexadecimmal digit is 0xD
    printf("The least significant hexadecimal digit is:0X%X\n",Bit_mask&num);

    /*Assume we have a register , we need to read or write individual bits without changing any other bits*/
    unsigned char TMR0_=0X8A; //assume this is the register current value 1000 1010
    //to set a ceratin bit 
    TMR0_=TMR0_|(1<<BIT_NUMBER1);
    printf("TMR0_=0X%X\n",TMR0_);
    TMR0_=0X8A;
    //to clear a certain bit
    TMR0_=TMR0_&(~(1<<BIT_NUMBER2));
    printf("TMR0_=0X%X\n",TMR0_);
    //to toggle a certain bit
    TMR0_=0X8A;
    TMR0_=TMR0_^(1<<BIT_NUMBER3);
    printf("TMR0_=0X%X\n",TMR0_);
    //to read a certain bit 
    TMR0_=0X8A;
    unsigned char result=0;
    result=(TMR0_&(1<<BIT_NUMBER4))>>BIT_NUMBER4;
    printf("Result=0X%X\n",result); 

    /**************************************Logical Shifting***********************************/
    return 0;
}
