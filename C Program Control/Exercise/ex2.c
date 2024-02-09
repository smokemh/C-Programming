// Write a program that calculates and prints the average of several integers. Assume the last value read with scanf is the sentinel 9999. A typical input sequence might be
// 10 8 11 7 9 9999
// indicating that the average of all the values preceding 9999 is to be calculated.

#include <stdio.h>

int main()
{
    int value, sum = 0, count = 0;
    float average;

    // Prompt for input
    printf("Enter integers (9999 to end): ");

    // Loop to read values until sentinel is encountered
    while (1)
    {
        scanf("%d", &value);
        if (value == 9999)
        {
            break; // Exit loop if sentinel is encountered
        }
        sum += value; // Add value to sum
        count++;      // Increment count
    }

    // Calculate average if count is not zero to avoid division by zero
    if (count > 0)
    {
        average = (float)sum / count; // Cast sum to float to get a floating-point division
        printf("The average of the entered values is: %.2f\n", average);
    }
    else
    {
        printf("No valid integers were entered.\n");
    }

    return 0;
}
