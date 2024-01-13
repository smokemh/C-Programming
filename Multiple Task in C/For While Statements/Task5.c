/* This C program prompts the user to enter a number and then prints a sequence of even numbers from 0 to the entered number (inclusive).
 */

#include <stdio.h>
void main()
{
    int num, y;
    printf("Enter The Num = ");
    scanf("%d", &num);
    for (y = 0; y <= num; y += 2)
    {
        printf("%d\n", y);
    }
}
