// Write a Program to print out "Hello World" for n number of times.

#include <stdio.h>
void main()
{
    int num, y;
    printf("Enter the number of time you want to print out = ");
    scanf("%d", &num);
    for (y = 0; y < num; y++)
    {
        printf("Hello World\n");
    }
}
