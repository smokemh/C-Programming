// The factorial of a nonnegative integer n is written n! (pronounced “n factorial”) and is defined as follows:
// n! = n · (n - 1) · (n - 2) · … · 1   (for values of n greater than or equal to 1)
// and
// n! = 1   (for n = 0).
// For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120.

// Write a C program that reads a nonnegative integer and computes and prints its factorial.

#include <stdio.h>

int main()
{
    int n, i;
    unsigned long long factorial = 1; // Use unsigned long long for storing large factorial values

    // Prompt the user to enter a nonnegative integer
    printf("Enter a nonnegative integer: ");
    scanf("%d", &n);

    // Validate the input
    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
    }
    else
    {
        // Calculate the factorial
        for (i = 1; i <= n; i++)
        {
            factorial *= i;
        }

        // Print the factorial
        printf("%d! = %llu\n", n, factorial);
    }

    return 0;
}
