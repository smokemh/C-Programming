// Write a program that demonstrates the difference between predecrement and postincrement using the decrement operator --.

#include <stdio.h>

int main()
{
    int a = 5;

    // Predecrement
    printf("Using Predecrement:\n");
    printf("Original value of a: %d\n", a);
    printf("Value after predecrement: %d\n", --a); // Predecrement
    printf("Final value of a: %d\n\n", a);

    // Reset value
    a = 5;

    // Postdecrement
    printf("Using Postdecrement:\n");
    printf("Original value of a: %d\n", a);
    printf("Value before postdecrement: %d\n", a--); // Postdecrement
    printf("Final value of a: %d\n", a);

    return 0;
}
