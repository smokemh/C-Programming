// Write a program that reads in three integers and then determines and prints the largest and the smallest integers in the group. Use only the programming techniques you have learned in this chapter.

#include <stdio.h>

int main()
{
    int num1, num2, num3;

    // Input three integers
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Determine the largest and smallest integers
    int largest = num1;
    int smallest = num1;

    if (num2 > largest)
    {
        largest = num2;
    }

    if (num3 > largest)
    {
        largest = num3;
    }

    if (num2 < smallest)
    {
        smallest = num2;
    }

    if (num3 < smallest)
    {
        smallest = num3;
    }

    // Print the results
    printf("Largest integer: %d\n", largest);
    printf("Smallest integer: %d\n", smallest);

    return 0;
}
