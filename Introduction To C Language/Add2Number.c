// Addition program.

#include <stdio.h>

// Function main begins program execution
int main(void)
{
    int firstInteger;  // Variable to store the first integer
    int secondInteger; // Variable to store the second integer

    printf("Enter first integer: "); // Prompt
    scanf("%d", &firstInteger);      // Read the first integer from the user

    printf("Enter second integer: "); // Prompt
    scanf("%d", &secondInteger);      // Read the second integer from the user

    // Display the sum of the two integers
    printf("The sum of %d and %d is %d\n", firstInteger, secondInteger, firstInteger + secondInteger);

    return 0; // Indicate successful completion
} // End function main
