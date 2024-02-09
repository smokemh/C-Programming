// Write a program that finds the smallest of several integers. Assume that the first value read specifies the number of values remaining.

#include <stdio.h>
#include <limits.h> // For INT_MAX

int main()
{
    int n, value;
    int smallest = INT_MAX; // Initialize smallest to the largest possible integer

    // Read the number of integers to compare
    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Loop to read the integers and find the smallest
    for (int i = 0; i < n; i++)
    {
        printf("Enter integer #%d: ", i + 1);
        scanf("%d", &value);
        if (value < smallest)
        {
            smallest = value; // Update smallest if a smaller integer is found
        }
    }

    // Check if any integer was entered and print the smallest
    if (n > 0)
    {
        printf("The smallest integer is: %d\n", smallest);
    }
    else
    {
        printf("No integers were entered.\n");
    }

    return 0;
}
