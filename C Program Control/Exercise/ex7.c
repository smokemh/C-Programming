#include <stdio.h>

int main()
{
    int numbers[5]; // Array to hold the 5 numbers
    int i, j;       // Loop counters

    printf("Enter 5 numbers between 1 and 30:\n");
    for (i = 0; i < 5; i++)
    {
        // Read each number, ensuring it's within the valid range
        do
        {
            printf("Number %d: ", i + 1);
            scanf("%d", &numbers[i]);
            if (numbers[i] < 1 || numbers[i] > 30)
            {
                printf("Please enter a number between 1 and 30.\n");
            }
        } while (numbers[i] < 1 || numbers[i] > 30);
    }

    printf("\nHistogram:\n");
    for (i = 0; i < 5; i++)
    {
        // For each number, print out that number of asterisks
        for (j = 0; j < numbers[i]; j++)
        {
            printf("*");
        }
        printf("\n"); // Move to the next line after printing each bar
    }

    // Wait for user input before closing
    printf("\nPress ENTER to exit...");
    while (getchar() != '\n')
        ;      // Clear the input buffer
    getchar(); // Wait for one more ENTER keypress

    return 0;
}
