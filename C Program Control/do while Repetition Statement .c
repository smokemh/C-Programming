#include <stdio.h>

// function main begins program execution
int main(void)
{
    unsigned int counter = 1; // initialize counter

    do
    {
        printf("%u ", counter); // display counter
    } while (++counter <= 10);  // end do...while

    return 0; // indicate that program ended successfully
} // end function main
