// Write a program that reads an integer and prints the value of the integer after the following if-else statements are executed. If the integer is positive, then the following statements are executed. If the integer is greater than or equal to 1000, then the integer is assigned the value 1000. Otherwise, if the integer is less than 500, then the integer is multiplied by 2. Otherwise, the integer is multiplied by 10. If the integer is negative, then the integer is added to 30. If the integer is 0, then the integer is assigned the value 1.

#include <stdio.h>

void main(void)
{
    int num1;

    printf("Enter Number . = ");
    scanf("%d", &num1);

    if (num1 > 0)
    {
        if (num1 >= 1000)
        {
            num1 = 1000;
        }
        else
        {
            if (num1 < 500)
            {
                num1 = num1 * 2;
            }
            else
            {
                num1 = num1 * 10;
            }
        }
    }
    else
    {
        num1 = num1 + 30;
    }
    printf("Num1 = %d\n", num1);
}