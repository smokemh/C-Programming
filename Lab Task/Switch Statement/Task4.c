// Write a program to check if the age is between 13 and 19 or not using switch statement.

#include <stdio.h>
void main()
{
    int age, x;
    printf("Please Enter Your Age \n");
    scanf("%d", &age);
    x = ((age > 12) && (age < 20));

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
