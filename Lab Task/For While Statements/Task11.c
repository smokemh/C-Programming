/* Write a C program to print all even numbers between 1 to 100. - using while loop*/

#include <stdio.h>
void main()
{
    int num, x;

    printf("Enter the number to find out even number from 0 to number require = ");
    scanf("%d", &num);

    x = 0;

    while (x <= num)
    {
        printf("%d\n", x);

        x = x + 2;
    }
}
