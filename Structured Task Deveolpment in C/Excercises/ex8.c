// Write a program to print the following pattern using for loop:
// **********
// *********
// ********
// *******
// ******
// *****
// ****
// ***
// **
// *

#include <stdio.h>

int main()
{
    int i, j;
    for (i = 0; i <= 10; i++)
    {
        for (j = 10; j >= i; j--)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}