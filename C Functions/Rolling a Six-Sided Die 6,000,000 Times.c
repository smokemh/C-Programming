#include <stdio.h>
#include <stdlib.h>
#include <time.h> // include for time()

// function main begins program execution
int main(void)
{
    unsigned int frequency1 = 0; // rolled 1 counter
    unsigned int frequency2 = 0; // rolled 2 counter
    unsigned int frequency3 = 0; // rolled 3 counter
    unsigned int frequency4 = 0; // rolled 4 counter
    unsigned int frequency5 = 0; // rolled 5 counter
    unsigned int frequency6 = 0; // rolled 6 counter

    unsigned int roll; // roll counter, value 1 to 6000000
    int face;          // represents one roll of the die, value 1 to 6

    srand(time(NULL)); // seed the random number generator

    // loop 6000000 times and summarize results
    for (roll = 1; roll <= 6000000; ++roll)
    {
        face = 1 + rand() % 6; // random number from 1 to 6

        // determine face value and increment appropriate counter
        switch (face)
        {
        case 1: // rolled 1
            ++frequency1;
            break;
        case 2: // rolled 2
            ++frequency2;
            break;
        case 3: // rolled 3
            ++frequency3;
            break;
        case 4: // rolled 4
            ++frequency4;
            break;
        case 5: // rolled 5
            ++frequency5;
            break;
        case 6: // rolled 6
            ++frequency6;
            break; // optional
        }          // end switch
    }              // end for

    // display results in tabular format
    printf("%s%13s\n", "Face", "Frequency");
    printf("1%13u\n", frequency1);
    printf("2%13u\n", frequency2);
    printf("3%13u\n", frequency3);
    printf("4%13u\n", frequency4);
    printf("5%13u\n", frequency5);
    printf("6%13u\n", frequency6);

    return 0; // indicate successful termination
} // end main
