#include <stdio.h>




int main()
{
    
    /* (\b) backspace character: transfers the cursor one character back, with or without deleting based on compiler */
    printf("Hello Embedded Engineer\b\b\b\bXX\n");
    /* (/a) alarm:makes alar voice*/
    printf("\a");
    /* (\n) new line:moves the cursor to a new line */
    printf("I\nam\nback\n");
    /*(\t) horizontal tab:*/
    printf("Student_Name \t\t Age \t\t Grade\n");
    /*(\v) vertical tab:*/
    printf("Hello \v World\n");
    /*(\\) backslash, (\')single quote, (\") double quote, (\?) question mark*/
    printf("Hello \\ World\n");
    printf("and he said \'OH Karim, are you okay\?'\ni replied faking a smile:\"yes Indeed\"\n");


}
