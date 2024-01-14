/* Write a program to find the sum of first n natural numbers using for loop.
 */
#include <stdio.h>
void main()
{
    int x, num, y;
    printf("Enter The Num = ");
    scanf("%d", &num);
    x = num;
    for (y = 0; y < x; y++)
    {
        num = num + y;
    }
    printf("%d\n", num);
}
