#include <stdio.h>

// function main begins program execution
int main(void)
{
    double amount;             // amount on deposit
    double principal = 1000.0; // starting principal
    double rate = .05;         // annual interest rate
    unsigned int year;         // year counter

    // output table column heads
    printf("%4s%21s\n", "Year", "Amount on deposit");

    // calculate amount on deposit for each of ten years
    for (year = 1; year <= 10; ++year)
    {
        // calculate new amount for specified year
        // Initially, set amount to principal for the first year calculation
        amount = principal;

        // Compound the interest for the current year
        for (unsigned int i = 0; i < year; ++i)
        {
            amount *= (1 + rate);
        }

        // output one table row
        printf("%4u%21.2f\n", year, amount);
    } // end for

    return 0; // indicate that program ended successfully
} // end function main
