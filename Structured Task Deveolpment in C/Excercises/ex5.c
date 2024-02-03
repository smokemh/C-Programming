//  The process of finding the largest number (i.e., the maximum of a group of numbers) is used frequently in computer applications. For example, a program that determines the winner of a sales contest would input the number of units sold by each salesperson.The salesperson who sells the most units wins the contest. Write a pseudo code program and then a program that inputs a series of 10 non-negative numbers and determines and prints the largest of the numbers. Hint: Your program should use three variables as follows: counter: A counter to count to 10 (i.e., to keep track of how many numbers have been input and to determine when all 10 numbers have been processed)number: The current number input to the program largest: The largest number found so far

//////////////////
/// Pseudo code///
//////////////////

// Initialize counter to 1
// Initialize largest to 0

// Repeat 10 times:
// Input a number
// If the number is greater than largest:
// Set largest to the number
// Increment counter

// Print the largest number

#include <stdio.h>

int main()
{
    int counter;
    double number, largest;

    // Initialize counter and largest
    counter = 1;
    largest = 0;

    // Input 10 numbers
    while (counter <= 10)
    {
        printf("Enter a non-negative number #%d: ", counter);
        scanf("%lf", &number);

        // Check if the current number is greater than the largest
        if (number > largest)
        {
            largest = number;
        }

        // Increment counter
        counter++;
    }

    // Print the largest number
    printf("The largest number is: %.2lf\n", largest);

    return 0;
}
