#include <stdio.h>

int square(int); // prototype for function square

int main()
{
    int a = 10; // value to square (local automatic variable in main)

    printf("%d squared: %d\n", a, square(a)); // display a squared
    return 0;                                 // Add return statement for clarity and compliance with standard
} // end main

// returns the square of an integer
int square(int x) // x is a local variable
{
    return x * x; // calculate square and return result
} // end function square
