// Write a program that reads an integer and determines and prints whether it’s odd or even. [Hint: Use the remainder operator. An even number is a multiple of two. Any multiple of two leaves a remainder of zero when divided by 2.

#include <stdio.h>

int main()
{
    int number;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Determine if the number is odd or even using the remainder operator
    if (number % 2 == 0)
    {
        printf("%d is even.\n", number);
    }
    else
    {
        printf("%d is odd.\n", number);
    }

    return 0;
}
