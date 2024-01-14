// (Arithmetic) Write a program that asks the user to enter two numbers, obtains them from the user and prints their sum, product, difference, quotient and remainder

#include <stdio.h>

int main()
{
    // Declare variables to store user input
    double num1, num2;

    // Prompt the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Perform arithmetic operations
    double sum = num1 + num2;
    double product = num1 * num2;
    double difference = num1 - num2;

    // Check if num2 is not zero before performing division
    if (num2 != 0)
    {
        double quotient = num1 / num2;
        double remainder = num1 - (quotient * num2);

        // Print the results
        printf("Sum: %.2f\n", sum);
        printf("Product: %.2f\n", product);
        printf("Difference: %.2f\n", difference);
        printf("Quotient: %.2f\n", quotient);
        printf("Remainder: %.2f\n", remainder);
    }
    else
    {
        printf("Error: Cannot divide by zero.\n");
    }

    return 0;
}
