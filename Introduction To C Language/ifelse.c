// Purpose: Read two integers and determine the relationships between them.

#include <stdio.h>

// function main begins program execution
int main(void)
{
    int num1; // first number to be read from user
    int num2; // second number to be read from user

    // Prompt the user to enter two integers
    printf("Enter two integers, and I will tell you\n");
    printf("the relationships they satisfy: ");

    // Read two integers from the user
    scanf("%d%d", &num1, &num2);

    // Check the relationships between the two numbers using if statements

    if (num1 != num2)
    {
        printf("%d is not equal to %d\n", num1, num2);
    } // end if

    if (num1 < num2)
    {
        printf("%d is less than %d\n", num1, num2);
    } // end if

    if (num1 > num2)
    {
        printf("%d is greater than %d\n", num1, num2);
    } // end if

    if (num1 <= num2)
    {
        printf("%d is less than or equal to %d\n", num1, num2);
    } // end if

    if (num1 >= num2)
    {
        printf("%d is greater than or equal to %d\n", num1, num2);
    } // end if

    return 0; // indicate that program ended successfully
} // end function main