/* Task: Write a program that reads a year from the user and displays a message indicating whether or not it is a leap year. A year is a leap year if it is divisible by 4 but not 100. However, years divisible by 400 are leap years. */

#include <stdio.h>
void main()
{
    int Year;
    printf("Enter Year");
    scanf("%d", &Year);
    if (Year % 4 == 0)
        printf("It is a Leap year");
    else
        printf("It is not a leap year");
}
* /
