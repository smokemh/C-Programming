// Write a Program to find smallest number using switch statement

#include <stdio.h>

int main()
{
    int a, b, c, x;
    printf("Enter Number 1\n");
    scanf("%d", &a);
    printf("Enter Number 2\n");
    scanf("%d", &b);
    printf("Enter Number 3\n");
    scanf("%d", &c);

    x = ((a < b) && (a < c)) + (((b < a) && (b < c)) * 2) + (((c < a) && (c < b)) * 3);
    switch (x)
    {
    case 1:
        printf("%d is smallest\n", a);
        break;
    case 2:
        printf("%d is smallest\n", b);
        break;
    case 3:
        printf("%d is smallest\n", c);
        break;
    }
}