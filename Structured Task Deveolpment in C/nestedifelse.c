#include <stdio.h>

int main()
{
    // Assume grade is a variable representing a student's score

    int grade = 75; // You can replace this with the actual grade value

    // Check if the grade is greater than or equal to 60
    if (grade >= 60)
    {
        // If true, print "Passed"
        printf("Passed\n");
    } // end if
    else
    {
        // If false, print "Failed"
        printf("Failed\n");
    } // end else

    // Additional example with letter grades
    if (grade >= 90)
    {
        printf("A\n");
    } // end if
    else if (grade >= 80)
    {
        printf("B\n");
    } // end else if
    else if (grade >= 70)
    {
        printf("C\n");
    } // end else if
    else if (grade >= 60)
    {
        printf("D\n");
    } // end else if
    else
    {
        printf("F\n");
    } // end else

    return 0;
}
