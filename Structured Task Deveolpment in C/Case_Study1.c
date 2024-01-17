/////// Case Study 1 ///////
/////// Counter Controlled Repetition ///////

/////// Pseudocode ///////

// 1 Set total to zero
// 2 Set grade counter to one
// 3
// 4 While grade counter is less than or equal to ten
// 5 Input the next grade
// 6 Add the grade into the total
// 7 Add one to the grade counter
// 8
// 9 Set the class average to the total divided by ten
// 10 Print the class average

/////// Program ///////

#include <stdio.h>

// Function main begins program execution
int main(void)
{

    int grade;        // Grade value
    int total;        // Sum of grades entered by the user
    int average;      // Average of grades
    int gradeCounter; // Grade counter

    // Initialization phase
    total = 0;        // Initialize total
    gradeCounter = 1; // Initialize grade counter

    // Processing phase
    while (gradeCounter <= 10)
    { // Loop 10 times

        // Prompt the user to enter a grade
        printf("Enter grade %d: ", gradeCounter);
        scanf("%d", &grade); // Read grade from the user

        total = total + grade; // Add grade to total

        gradeCounter = gradeCounter + 1; // Increment grade counter
    }                                    // end while

    // Termination phase
    average = total / 10; // Calculate class average (integer division)

    // Display the result
    printf("Class average is %d\n", average);

    return 0;
} // end function main
