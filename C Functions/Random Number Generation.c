// Shifted, scaled random integers produced by 1 + rand() % 6.
#include <stdio.h>
#include <stdlib.h>

// function main begins program execution
int main(void)
{
    unsigned int i; // counter

    // seed the random number generator
    srand(time(NULL));

    // loop 20 times
    for (i = 1; i <= 20; ++i) {

        // pick random number from 1 to 6 and output it
        printf("%10d", 1 + rand() % 6);

        // if counter is divisible by 5, begin new line of output
        if (i % 5 == 0) {
            puts("");
        } // end if
    } // end for
    return 0; // indicate successful termination
} // end main
