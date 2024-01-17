#include <stdio.h>

int main()
{
    int grade;

    // Prompt the user for a grade until a valid one is entered
    while (1)
    {
        printf("Enter the student's grade: ");
        scanf("%d", &grade);

        // Validate the grade input
        if (grade >= 0 && grade <= 100)
        {
            break; // Exit the loop if a valid grade is entered
        }
        else
        {
            printf("Invalid grade. Please enter a grade between 0 and 100.\n");
        }
    }

    // Use the conditional operator to determine Pass or Fail
    printf("Result: %s\n", (grade >= 60) ? "Passed" : "Failed");

    return 0;
}
