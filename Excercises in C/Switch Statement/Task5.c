// Write a program that asks the user to enter his/her age. If the age is between 12 and 20, the program should display a message telling the user that he/she is eligible to participate in a special summer program. If the age is less than 12 or greater than 20, the program should display a message that he/she is not eligible for the program.

#include <stdio.h>
void main()
{
    int age, x;
    printf("Please Enter Your Age \n");
    scanf("%d", &age);
    x = ((age > 20) || (age < 12));
    switch (x)
    {
    case 1:
        printf("Admission is Free \n");
        break;
    default:
        printf("Admission is not Free \n");
        break;
    }
}
