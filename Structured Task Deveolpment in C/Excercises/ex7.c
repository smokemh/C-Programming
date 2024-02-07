// Write a program that reads in the side of a square and then prints that square out of asterisks. Your program should work for squares of all side sizes between 1 and 20. For example, if your program reads a size of 4, it should print

// ****
// ****
// ****
// ****

#include <stdio.h>

int main()
{
    int side, i, j;

    // Prompt the user for the side length of the square
    printf("Enter the side length of the square (1-20): ");
    scanf("%d", &side);

    // Validate the input to ensure it's between 1 and 20
    if (side < 1 || side > 20)
    {
        printf("Side length must be between 1 and 20.\n");
        return 1; // Exit the program with an error code
    }

    // Use nested loops to print the square of asterisks
    for (i = 0; i < side; i++)
    { // Outer loop for each row
        for (j = 0; j < side; j++)
        { // Inner loop for each column in the row
            printf("*");
        }
        printf("\n"); // Move to the next line after printing each row
    }

    return 0; // Indicate successful completion
}
