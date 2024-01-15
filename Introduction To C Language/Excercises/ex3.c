// (Comparing Integers) Write a program that asks the user to enter two integers, obtains the numbers from the user, then prints the larger number followed by the words “is larger.” If the numbers are equal, print the message “These numbers are equal.” Use only the single-selection form of the if statement you learned in this chapter

#include <stdio.h>

int main()
{
    // Declare variables to store user input
    int num1, num2;

    // Get input from the user
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Compare the two numbers using a single-selection if statement
    if (num1 > num2)
        printf("%d is larger.\n", num1);
    else if (num2 > num1)
        printf("%d is larger.\n", num2);
    else
        printf("These numbers are equal.\n");

    return 0;
}
