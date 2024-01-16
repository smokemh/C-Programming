// Write a program that inputs one five-digit number, separates the number into its individual digits and prints the digits separated from one another by three spaces each.

#include <stdio.h>

int main()
{
    int number;

    // Input a five-digit number
    printf("Enter a five-digit number: ");
    scanf("%d", &number);

    // Extract and print each digit with three spaces in between
    int digit5 = number % 10;
    int digit4 = (number / 10) % 10;
    int digit3 = (number / 100) % 10;
    int digit2 = (number / 1000) % 10;
    int digit1 = (number / 10000) % 10;

    printf("%d   %d   %d   %d   %d\n", digit1, digit2, digit3, digit4, digit5);

    return 0;
}
