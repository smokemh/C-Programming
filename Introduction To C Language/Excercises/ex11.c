// Research several car-pooling websites. Create an application that calculates your daily driving cost, so that you can estimate how much money could be saved by car pooling, which also has other advantages such as reducing carbon emissions and reducing traffic congestion. The application should input the following information and display the user’s cost per
// day of driving to work:
// a) Total miles driven per day.
// b) Cost per gallon of gasoline.
// c) Average miles per gallon.
// d) Parking fees per day.
// e) Tolls per day.

#include <stdio.h>

int main()
{
    // Variables to store user input
    double totalMiles, costPerGallon, averageMilesPerGallon, parkingFees, tolls;

    // Prompt user to enter information
    printf("Enter total miles driven per day: ");
    scanf("%lf", &totalMiles);

    printf("Enter cost per gallon of gasoline: ");
    scanf("%lf", &costPerGallon);

    printf("Enter average miles per gallon: ");
    scanf("%lf", &averageMilesPerGallon);

    printf("Enter parking fees per day: ");
    scanf("%lf", &parkingFees);

    printf("Enter tolls per day: ");
    scanf("%lf", &tolls);

    // Calculate daily driving cost
    double dailyCost = (totalMiles / averageMilesPerGallon) * costPerGallon + parkingFees + tolls;

    // Display the calculated daily driving cost
    printf("Your daily driving cost is: $%.2f\n", dailyCost);

    return 0;
}
