//  Input an integer (5 digits or fewer)containing only 0s and 1s (i.e., a “binary” integer) and print its decimal equivalent. [Hint: Use the remainder and division operators to pick off the “binary” number’s digits one at a time from right to left. Just as in the decimal number system, in which the rightmost digit has a positional value of 1, and the next digit left has a positional value of 10, then 100, then 1000, and so on, in the binary number system the rightmost digit has a positional value of 1, the next digit left has a positional value of 2, then 4, then 8, and so on. Thus the decimal number 234 can be interpreted as 4 * 1 + 3 * 10 +  2 * 100. The decimal equivalent of binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 * 8 or 1 + 0 + 4 + 8 or 13.]

#include <stdio.h>

int main()
{
    int binary, decimal = 0, base = 1, remainder;

    // Prompt the user for a binary number (5 digits or fewer)
    printf("Enter a binary number (5 digits or fewer): ");
    scanf("%d", &binary);

    // Check if the entered number is a binary number
    int temp = binary;
    while (temp > 0)
    {
        remainder = temp % 10;
        if (remainder != 0 && remainder != 1)
        {
            printf("Invalid input: Not a binary number.\n");
            return 1; // Exit with error code
        }
        temp /= 10;
    }

    // Process each digit of the binary number
    while (binary > 0)
    {
        remainder = binary % 10; // Get the rightmost digit
        decimal += remainder * base;
        binary /= 10; // Remove the rightmost digit from the binary number
        base *= 2;    // Move to the next higher power of 2
    }

    // Print the decimal equivalent
    printf("The decimal equivalent is %d.\n", decimal);

    return 0;
}
