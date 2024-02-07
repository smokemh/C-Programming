// (Target-Heart-Rate Calculator) While exercising, you can use a heart-rate monitor to see that your heart rate stays within a safe range suggested by your trainers and doctors. According to the American Heart Association (AHA), the formula for calculating your maximum heart rate in beats per minute is 220 minus your age in years. Your target heart rate is a range that’s 50–85% of your maximum heart rate. [Note: These formulas are estimates provided by the AHA. Maximum and target heart rates may vary based on the health, fitness and gender of the individual. Always consult a physician or qualified health care professional before beginning or modifying an exercise program.]
// Create a C program that reads the user’s birthday and the current day (each consisting of the month, day and year). Your program should calculate and display the person’s age (in years), the person’s maximum heart rate and the person’s target-heart-rate range.

#include <stdio.h>

int main()
{
    int birthMonth, birthDay, birthYear;
    int currentMonth, currentDay, currentYear;
    int age, maxHeartRate;
    double targetHeartRateLow, targetHeartRateHigh;

    // Prompt for and read the user's birthday
    printf("Enter your birthday (MM DD YYYY): ");
    scanf("%d %d %d", &birthMonth, &birthDay, &birthYear);

    // Prompt for and read the current day
    printf("Enter today's date (MM DD YYYY): ");
    scanf("%d %d %d", &currentMonth, &currentDay, &currentYear);

    // Calculate age in years
    age = currentYear - birthYear;
    if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay))
    {
        age--; // Adjust age if the current day is before the birthday in the current year
    }

    // Calculate maximum heart rate
    maxHeartRate = 220 - age;

    // Calculate target heart rate range
    targetHeartRateLow = maxHeartRate * 0.50;
    targetHeartRateHigh = maxHeartRate * 0.85;

    // Display results
    printf("Age: %d years\n", age);
    printf("Maximum Heart Rate: %d beats per minute\n", maxHeartRate);
    printf("Target Heart Rate Range: %.2f to %.2f beats per minute\n", targetHeartRateLow, targetHeartRateHigh);

    return 0;
}
