// (Parking Charges) A parking garage charges a $2.00 minimum fee to park for up to three hours and an additional $0.50 per hour for each hour or part thereof over three hours. The maximum charge for any given 24-hour period is $10.00. Assume that no car parks for longer than 24 hours at a time. Write a program that will calculate and print the parking charges for each of three customers who parked their cars in this garage yesterday. You should enter the hours parked for each customer. Your program should print the results in a tabular format, and should calculate and print the total of yesterday's receipts. The program should use the function calculateCharges to determine the charge for each customer. Your outputs should appear in the following format:

//              Car  Hours  Charge
//                1          1.5         2.00
//                2         4.0        2.50
//                3         24.0      10.00
//            TOTAL   29.5    14.50

#include <stdio.h>

// Prototype for calculateCharges function
double calculateCharges(double hours);

int main(void)
{
    double hours[3];   // Array to store hours parked for three customers
    double charges[3]; // Array to store charges for three customers
    double totalHours = 0, totalCharges = 0;

    // Input hours parked for each customer
    for (int i = 0; i < 3; ++i)
    {
        printf("Enter hours parked for customer %d: ", i + 1);
        scanf("%lf", &hours[i]);
        charges[i] = calculateCharges(hours[i]);
        totalHours += hours[i];
        totalCharges += charges[i];
    }

    // Printing the results in a tabular format
    printf("\nCar   Hours   Charge\n");
    for (int i = 0; i < 3; ++i)
    {
        printf("%3d %7.1f %8.2f\n", i + 1, hours[i], charges[i]);
    }
    // Print total hours and total charges
    printf("TOTAL %6.1f %8.2f\n", totalHours, totalCharges);

    return 0;
}

// Function to calculate parking charges
double calculateCharges(double hours)
{
    double charge = 2.00; // Minimum fee

    if (hours <= 3)
    {
        return charge;
    }
    else
    {
        charge += 0.50 * ((int)(hours - 3)); // Add 0.50 for each hour over 3
        if (hours - 3 > (int)(hours - 3))
        { // Check for any part of an hour
            charge += 0.50;
        }
    }

    if (charge > 10.00)
    { // Maximum charge is $10.00
        charge = 10.00;
    }

    return charge;
}
