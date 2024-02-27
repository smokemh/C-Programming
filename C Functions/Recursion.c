#include <stdio.h>

// Prototype for the factorial function
unsigned long long int factorial(unsigned int number);

// main function begins program execution
int main(void)
{
    unsigned int i; // counter

    // Loop through numbers from 0 to 21 and print their factorials
    for (i = 0; i <= 21; ++i)
    {
        printf("%u! = %llu\n", i, factorial(i));
    } // end for

    return 0; // indicate successful termination
} // end main

// Recursive definition of function factorial
unsigned long long int factorial(unsigned int number)
{
    // base case
    if (number <= 1)
    {
        return 1;
    }
    else
    { // recursive step
        return number * factorial(number - 1);
    } // end else
} // end function factorial
