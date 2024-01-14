/* Write a C program to print all natural numbers from 1 to n. - using while loop*/

#include <stdio.h>
void main()
{
    int num, x;

    printf("Enter the number = ");
    scanf("%d", &num);

    x = 0;

    while (x <= num)
    {
        printf("%d\n", x);

        x = x + 1;
    }
}
