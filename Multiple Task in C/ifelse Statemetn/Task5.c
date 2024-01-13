// Write a C Program to calculate grade of a student according to his/her percentage
#include <stdio.h>

int main()
{
    float obtained, total;
    float percentage;
    printf("Enter Marks Obtained by Student :");
    scanf_s("%f", &obtained);
    printf("Enter Total Marks :");
    scanf_s("%f", &total);

    if (obtained > total || obtained > 100 || total > 100)
        printf("INVALID ENTRY\n");
    else
    {
        percentage = (obtained / total) * 100;
        if (percentage >= 90)
            printf(" Student got A grade");
        else if (percentage >= 80)
            printf(" Student got B grade");
        else if (percentage >= 65)
            printf(" Student got C grade");
        else if (percentage >= 50)
            printf(" Student got D grade");
        else if (percentage < 50)
            printf(" Student got FAILED");
    }
}