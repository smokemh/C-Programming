/*  Write a program that will take percentage as input and will print grade according to the following criteria.*/
// 90-100 A
// 80-89 A-
// 70-79 B
// 60-69 C
// 50-59 D
// 40-49 E
// 0-39 F

#include <stdio.h>
void main()
{
    int percentage;
    printf("Enter Your Percentage to find out grade \n");
    scanf("%d", &percentage);
    percentage = percentage / 10;
    switch (percentage)
    {
    case 5:
        printf("Student Got E grade \n");
        break;
    case 6:
        printf("Student Got D grade \n");
        break;
    case 7:
        printf("Student Got C grade \n");
        break;
    case 8:
        printf("Student Got B grade \n");
        break;
    case 9:
        printf("Student Got A- grade \n");
        break;
    case 10:
        printf("Student Got A grade \n");
        break;
    default:
        printf("Student Got F grade \n");
        break;
    }
}
