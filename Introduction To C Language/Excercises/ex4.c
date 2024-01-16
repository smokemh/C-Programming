//  (Arithmetic, Largest Value and Smallest Value) Write a program that inputs three different integers from the keyboard, then prints the sum, the average, the product, the smallest and the largest of these numbers. Use only the single-selection form of the if statement you learned in this chapter. The screen dialogue should appear as follows:
// Enter three different integers: 13 27 14
// Sum is 54
// Average is 18
// Product is 4914
// Smallest is 13
// Largest is 27

#include <stdio.h>

int main()
{
    int num1, num2, num3;
    int sum, product, smallest, largest;
    float average;

    // Input three different integers
    printf("Enter three different integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calculate sum
    sum = num1 + num2 + num3;

    // Calculate average
    average = (float)sum / 3;

    // Calculate product
    product = num1 * num2 * num3;

    // Determine smallest and largest
    smallest = num1;
    largest = num1;

    if (num2 < smallest)
    {
        smallest = num2;
    }
    else if (num2 > largest)
    {
        largest = num2;
    }

    if (num3 < smallest)
    {
        smallest = num3;
    }
    else if (num3 > largest)
    {
        largest = num3;
    }

    // Display results
    printf("Sum is %d\n", sum);
    printf("Average is %.2f\n", average);
    printf("Product is %d\n", product);
    printf("Smallest is %d\n", smallest);
    printf("Largest is %d\n", largest);

    return 0;
}
