/////// Case Study 2 ///////
/////// Sentinel-Controlled Repetition ///////

/////// Pseudocode ///////

// 1 Initialize total to zero
// 2 Initialize counter to zero
// 3
// 4 Input the first grade
// 5 While the user has not as yet entered the sentinel
// 6 Add this grade into the running total
// 7 Add one to the grade counter
// 8 Input the next grade (possibly the sentinel)
// 9
// 10 If the counter is not equal to zero
// 11 Set the average to the total divided by the counter
// 12 Print the average
// 13 else
// 14 Print “No grades were entered”

#include <stdio.h>

// Function main begins program execution
int main(void)
{
    unsigned int counter; // Number of grades entered
    int grade;            // Grade value
    int total;            // Sum of grades
    float average;        // Number with a decimal point for average

    // Initialization phase
    total = 0;   // Initialize total
    counter = 0; // Initialize counter

    // Processing phase
    // Get the first grade from the user
    printf("Enter the first grade (or sentinel to end): ");
    scanf("%d", &grade);

    // Loop while sentinel value not yet read from the user
    while (grade != -1)
    {
        total = total + grade; // Add grade to total
        counter = counter + 1; // Increment counter

        // Get the next grade from the user
        printf("Enter the next grade (or sentinel to end): ");
        scanf("%d", &grade);
    } // end while

    // Termination phase
    // If the user entered at least one grade
    if (counter != 0)
    {
        // Calculate the average of all grades entered
        average = (float)total / counter; // Avoid truncation

        // Display average with two digits of precision
        printf("Class average is %.2f\n", average);
    } // end if
    else
    {
        // If no grades were entered, output a message
        puts("No grades were entered");
    } // end else

    return 0;
} // end function main
