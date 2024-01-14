// Printing Values with printf) Write a program that prints the numbers 1 to 4 on the same
// line. Write the program using the following methods.
// a) Using one printf statement with no conversion specifiers.
// b) Using one printf statement with four conversion specifiers.
// c) Using four printf statements.

#include <stdio.h>

int main()
{
    // a) Using one printf statement with no conversion specifiers
    printf("1 2 3 4\n");

    // b) Using one printf statement with four conversion specifiers
    printf("%d %d %d %d\n", 1, 2, 3, 4);

    // c) Using four printf statements
    printf("1 ");
    printf("2 ");
    printf("3 ");
    printf("4\n");

    return 0;
}
