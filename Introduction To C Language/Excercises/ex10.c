// Create a BMI calculator application that reads the user’s weight in pounds and height in inches (or, if you prefer, the user’s weight in kilograms and height in meters), then calculates and displays the user’s body mass index. Also, the application should display the following information from the Department of Health and Human Services/National Institutes of Health so the user can evaluate his/her BMI:
// BMI VALUES
// Underweight: less than 18.5
// Normal: between 18.5 and 24.9
// Overweight: between 25 and 29.9
// Obese: 30 or greater

#include <stdio.h>

int main()
{
    // Variables to store user input
    double weight, height;

    // Prompt user to enter weight in pounds and height in inches
    printf("Enter your weight in pounds: ");
    scanf("%lf", &weight);

    printf("Enter your height in inches: ");
    scanf("%lf", &height);

    // Calculate BMI using the BMI formula
    double bmi = (weight / (height * height)) * 703;

    // Display the calculated BMI
    printf("Your BMI is: %.2f\n", bmi);

    // Display BMI categories
    printf("BMI VALUES\n");
    printf("Underweight: less than 18.5\n");
    printf("Normal: between 18.5 and 24.9\n");
    printf("Overweight: between 25 and 29.9\n");
    printf("Obese: 30 or greater\n");

    return 0;
}
