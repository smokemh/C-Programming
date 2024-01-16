// Write a C program that prints the following shapes with asterisks

// *************
// *           *
// *           *
// *           *
// *           *
// *           *
// *           *
// *************

#include <stdio.h>

int main()
{
    // Print the top row
    for (int i = 1; i <= 13; i++)
    {
        printf("*");
    }
    printf("\n");

    // Print the middle rows
    for (int i = 1; i <= 6; i++)
    {
        printf("*");
        for (int j = 1; j <= 11; j++)
        {
            printf(" ");
        }
        printf("*\n");
    }

    // Print the bottom row
    for (int i = 1; i <= 13; i++)
    {
        printf("*");
    }
    printf("\n");

    return 0;
}
