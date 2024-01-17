/////// Case Study 3 ///////
/////// Nested Control Statement ///////

/////// Pseudocode ///////
// 1 Initialize passes to zero
// 2 Initialize failures to zero
// 3 Initialize student to one
// 4
// 5 While student counter is less than or equal to ten
// 6 Input the next exam result
// 7
// 8 If the student passed
// 9 Add one to passes
// 10 else
// 11 Add one to failures
// 12
// 13 Add one to student counter
// 14
// 15 Print the number of passes
// 16 Print the number of failures
// 17 If more than eight students passed
// 18 Print “Bonus to instructor!”

#include <stdio.h>

// Function main begins program execution
int main(void)
{
    // Initialize variables in definitions
    int result;                // One exam result
    unsigned int passes = 0;   // Number of passes
    unsigned int failures = 0; // Number of failures
    unsigned int student = 1;  // Student counter

    // Process 10 students using a counter-controlled loop
    while (student <= 10)
    {
        // Prompt user for input and obtain value from the user
        printf("%s", "Enter result (1=pass, 2=fail): ");
        scanf("%d", &result);

        // Check if the result is a pass (1)
        if (result == 1)
        {
            passes = passes + 1; // Increment passes
        }
        else
        {
            failures = failures + 1; // Increment failures
        }

        student = student + 1; // Increment student counter
    }                          // end while

    // Termination phase; display the number of passes and failures
    printf("Passed: %u\n", passes);
    printf("Failed: %u\n", failures);

    // If more than eight students passed, print "Bonus to instructor!"
    if (passes > 8)
    {
        puts("Bonus to instructor!");
    } // end if

    return 0;
} // end function main
