#include <stdio.h>

// function main begins program execution
int main(void)
{
    // initialization, repetition condition, and increment
    // are all included in the for statement header.
    for (unsigned int counter = 1; counter <= 10; ++counter)
    {
        // display counter
        printf("%u\n", counter);
    } // end for

    return 0; // indicate that program ended successfully
} // end function main
