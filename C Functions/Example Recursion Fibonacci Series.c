#include <stdio.h>

// Function prototype for the fibonacci function
unsigned long long int fibonacci(unsigned int n);

// Main function begins program execution
int main(void)
{
    unsigned long long int result; // fibonacci value
    unsigned int number;           // number input by user

    // Obtain integer from user
    printf("%s", "Enter an integer: ");
    scanf("%u", &number);

    // Calculate fibonacci value for number input by user
    result = fibonacci(number);

    // Display result
    printf("Fibonacci(%u) = %llu\n", number, result);

    return 0; // Indicate successful termination
} // end main

// Recursive definition of function fibonacci
unsigned long long int fibonacci(unsigned int n)
{
    // Base case
    if (0 == n || 1 == n)
    {
        return n;
    }
    else
    { // Recursive step
        return fibonacci(n - 1) + fibonacci(n - 2);
    } // end else
} // end function fibonacci
