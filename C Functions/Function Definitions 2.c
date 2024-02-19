#include <stdio.h>

// Function prototype
int maximum(int x, int y, int z);

// Function main begins program execution
int main(void)
{
    int num1, num2, num3;

    // Prompt user for input
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Print the maximum value
    printf("Maximum: %d\n", maximum(num1, num2, num3));

    return 0;
}

// Function definition for finding the maximum of three integers
int maximum(int x, int y, int z)
{
    int max = x; // Assume x is the largest to start

    if (y > max)
    {
        max = y; // y is larger than max
    }

    if (z > max)
    {
        max = z; // z is larger than max
    }

    return max; // Return the largest value
}
