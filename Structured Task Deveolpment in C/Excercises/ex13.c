// Write a c program that reads an integer (5 digits or fewer) and determines and prints how many digits in the integer are 7s.

#include <stdio.h>

int main()
{
    int number, count = 0;

    // Prompt the user to enter an integer with 5 digits or fewer
    printf("Enter an integer (5 digits or fewer): ");
    scanf("%d", &number);

    while (number != 0)
    {
        // Check if the current rightmost digit is 7
        if (number % 10 == 7)
        {
            count++; // Increment the count if the digit is 7
        }
        number /= 10; // Remove the rightmost digit
    }

    // Print the number of digits that are 7s
    printf("The number of digits that are 7s: %d\n", count);

    return 0;
}
