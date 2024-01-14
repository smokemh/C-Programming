/* Write a program to print the table of a given number using for loop. */

#include <stdio.h>
void main()
{
    int y, num, result;
    printf("Enter number you want to know about its table=");
    scanf("%d", &num);

    for (y = 1; y <= 10; y++)
    {

        result = num * y;
        printf("%d * %d = %d \n", num, y, result);
    }
}
