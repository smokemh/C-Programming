// Write a program that prints a table of all the Roman numeral equivalents of the decimal numbers in the range 1 to 100.

#include <stdio.h>

void printRoman(int number)
{
    // Arrays to hold Roman numerals symbols
    char *hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char *tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char *ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    // Convert to Roman numeral
    int i = number / 100;
    printf("%s", hundreds[i]); // Print hundreds place
    number %= 100;

    i = number / 10;
    printf("%s", tens[i]); // Print tens place
    number %= 10;

    printf("%s", ones[number]); // Print ones place
}

int main()
{
    printf("Decimal\tRoman\n");
    printf("-------\t-----\n");
    for (int i = 1; i <= 100; ++i)
    {
        printf("%d\t", i);
        printRoman(i);
        printf("\n");
    }
    return 0;
}
