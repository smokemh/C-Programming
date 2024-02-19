#include <stdio.h>

int square(int y); // function prototype

// function main begins program execution
int main(void)
{
    int x; // counter

    // loop 10 times and calculate and output square of x each time
    for (x = 1; x <= 10; ++x)
    {
        printf("%d  ", square(x)); // corrected function call
    }                              // end for

    puts(""); // moves to the next line after loop ends
    return 0; // indicates successful program termination
} // end main

// square function definition returns the square of its parameter
int square(int y) // y is a copy of the argument to the function
{
    return y * y; // returns the square of y as an int
} // end function square
