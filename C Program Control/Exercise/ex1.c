// Write a program that sums a sequence of integers. Assume that the first integer read with scanf specifies the number of values remaining to be entered. Your program should read only one value each time scanf is executed. A typical input sequence might be
// 5 100 200 300 400 500
// where the 5 indicates that the subsequent five values are to be summed.

#include <stdio.h>

int main()
{
    int n, value, sum = 0;

    // Read the number of integers to sum
    printf("Enter the number of integers to sum: ");
    scanf("%d", &n);

    // Loop to read and sum the integers
    for (int i = 0; i < n; i++)
    {
        printf("Enter integer #%d: ", i + 1);
        scanf("%d", &value);
        sum += value;
    }

    // Print the sum
    printf("The sum of the integers is: %d\n", sum);

    return 0;
}
