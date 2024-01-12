/* Write a C program that prompts the user to enter a number and then prints a sequence of numbers from 0 to the entered number (inclusive).
 */

#include <stdio.h>
void main()
{
    int num, y;
    printf("Enter the number = ");
    scanf("%d", &num);
    for (y = 0; y <= num; y++)
    {
        printf("%d\n", y);
    }
}
