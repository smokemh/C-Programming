// Purpose: To demonstrate how to get user input in C.

#include <stdio.h>

int main(void)
{
    int integer1; // first number to be entered by user
    int integer2; // second number to be entered by user
    int sum;      // variable in which sum will be stored

    printf("Enter first integer\n"); // prompt

    // read an integer
    scanf("%d", &integer1);

    printf("Enter second integer\n"); // prompt

    // read an integer
    scanf("%d", &integer2);

    sum = integer1 + integer2; // assign total to sum

    printf("Sum is %d\n", sum); // print sum

    return 0; // indicate that program ended successfully
} // end function main
