#include <stdio.h>
#include <stdlib.h>

// function main begins program execution
int main(void)
{
    unsigned int i;    // counter
    unsigned int seed; // seed for random number generator

    printf("%s", "Enter seed: ");
    scanf("%u", &seed); // note %u for unsigned int

    // seed the random number generator
    srand(seed);

    // loop 10 times
    for (i = 1; i <= 10; ++i)
    {
        // pick a random number from 1 to 6 and output it
        printf("%10d", 1 + (rand() % 6));

        // if counter is divisible by 5, begin a new line of output
        if (i % 5 == 0)
        {
            puts("");
        }     // end if
    }         // end for
    return 0; // indicate successful termination
} // end main
