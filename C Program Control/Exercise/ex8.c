//  Write a C program that prints a table of the binary, octal and hexadecimal equivalents of the decimal numbers in the range 1 through 256. If you’re not familiar with these number systems, read AppendixC before you attempt this exercise. [Note: You can display an integer as an octal or hexadecimal value with the conversion specifiers %o and %X, respectively.]

#include <stdio.h>

void printBinary(int n)
{
    int binary[8]; // Array to hold binary number (up to 8 bits for 1-256 range)
    int i = 0;
    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    // Print the binary number in reverse order
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", binary[j]);
    }
}

int main()
{
    printf("Decimal  Binary      Octal  Hexadecimal\n");
    printf("-------  -------     -----  -----------\n");
    for (int i = 1; i <= 256; i++)
    {
        printf("%7d  ", i);              // Print decimal
        printBinary(i);                  // Print binary
        printf("     %05o  %X\n", i, i); // Print octal and hexadecimal with padding for alignment
    }
    return 0;
}
