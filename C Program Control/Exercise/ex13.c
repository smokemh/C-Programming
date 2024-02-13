// Write a program that prints the following diamond shape. You may use printf statements that print either a single asterisk (*) or a single blank. Maximize your use of repetition (with nested for statements) and minimize the number of printf statements

//     *
//    ***
//   *****
//  *******
// *********
//  *******
//   *****
//    ***
//     *

#include <stdio.h>

int main()
{
    int i, j, rows = 5; // This will create a diamond with 9 rows in total.

    // Print the upper half of the diamond
    for (i = 1; i <= rows; i++)
    {
        // Print leading spaces
        for (j = i; j < rows; j++)
        {
            printf(" ");
        }
        // Print asterisks
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    // Print the lower half of the diamond
    for (i = 1; i <= rows - 1; i++)
    {
        // Print leading spaces
        for (j = 1; j <= i; j++)
        {
            printf(" ");
        }
        // Print asterisks
        for (j = 1; j <= (2 * (rows - i) - 1); j++)
        {
            printf("*");
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}
