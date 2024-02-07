// (Palindrome Tester) A palindrome is a number or a text phrase that reads the same back
// ward as forward. For example, each of the following five-digit integers is a palindrome: 12321,55555, 45554 and 11611. Write a program that reads in a five-digit integer and determines whether or not it’s a palindrome. [Hint: Use the division and remainder operators to separate the number into its individual digits.]

#include <stdio.h>

int main()
{
    int number, original, digit1, digit2, digit4, digit5;

    // Prompt the user for a five-digit integer
    printf("Enter a five-digit integer: ");
    scanf("%d", &number);

    // Store the original number for final output
    original = number;

    // Check if the number has five digits
    if (number < 10000 || number > 99999)
    {
        printf("The number must be a five-digit integer.\n");
        return 1; // Exit with error code
    }

    // Extract digits using division and remainder operations
    digit1 = number / 10000; // First digit
    number %= 10000;         // Remove the first digit from number
    digit2 = number / 1000;  // Second digit
    number %= 100;           // Remove second and third digits from number
    digit4 = number / 10;    // Fourth digit
    digit5 = number % 10;    // Fifth digit

    // Determine if the number is a palindrome
    if (digit1 == digit5 && digit2 == digit4)
    {
        printf("%d is a palindrome.\n", original);
    }
    else
    {
        printf("%d is not a palindrome.\n", original);
    }

    return 0;
}
