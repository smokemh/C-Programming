#include <stdio.h>

// function main begins program execution
int main(void)
{
    int grade;               // one grade
    unsigned int aCount = 0; // number of As
    unsigned int bCount = 0; // number of Bs
    unsigned int cCount = 0; // number of Cs
    unsigned int dCount = 0; // number of Ds
    unsigned int fCount = 0; // number of Fs

    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input.");

    // loop until user types end-of-file key sequence
    while ((grade = getchar()) != EOF)
    {
        // ignore newlines, tabs, and spaces in input
        if (grade == '\n' || grade == '\t' || grade == ' ')
        {
            continue; // skip the rest of the loop iteration
        }

        // determine which grade was input
        switch (grade)
        {
        case 'A':
        case 'a':
            ++aCount; // increment aCount
            break;
        case 'B':
        case 'b':
            ++bCount; // increment bCount
            break;
        case 'C':
        case 'c':
            ++cCount; // increment cCount
            break;
        case 'D':
        case 'd':
            ++dCount; // increment dCount
            break;
        case 'F':
        case 'f':
            ++fCount; // increment fCount
            break;
        default:
            printf("%s", "Incorrect letter grade entered.");
            puts(" Enter a new grade.");
            break;
        } // end switch
    }     // end while

    // output summary of results
    puts("\nTotals for each letter grade are:");
    printf("A: %u\n", aCount); // display number of A grades
    printf("B: %u\n", bCount); // display number of B grades
    printf("C: %u\n", cCount); // display number of C grades
    printf("D: %u\n", dCount); // display number of D grades
    printf("F: %u\n", fCount); // display number of F grades
} // end function main
