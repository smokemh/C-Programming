// (Tax Plan Alternatives; The “FairTax”) There are many proposals to make taxation fairer. Check out the FairTax initiative in the United States at
// www.fairtax.org/site/PageServer?pagename=calculator

// Research how the proposed FairTax works. One suggestion is to eliminate income taxes and most other taxes in favor of a 23% consumption tax on all products and services that you buy. Some FairTax opponents question the 23% figure and say that because of the way the tax is calculated, it would be more accurate to say the rate is 30%—check this carefully. Write a program that prompts the user to enter expenses in various categories (e.g., housing, food, clothing, transportation, education, health care, vacations), then prints the estimated FairTax that person would pay.

// Inclusive Rate: If an item costs $77 at retail, and the tax is $23 (making the total $100), the tax rate is 23% of the total price ($23 of $100).

// Exclusive Rate: The same $23 on a $77 item is 30% of the item's price before tax ($23 of $77).

// The FairTax is an inclusive tax, so the 23% figure is correct. The exclusive rate is 30%.

#include <stdio.h>

int main()
{
    // Categories of expenses
    double housing, food, clothing, transportation, education, healthCare, vacations;
    double totalExpenses, fairTax;

    // Input expenses
    printf("Enter your annual expenses for the following categories:\n");
    printf("Housing: ");
    scanf("%lf", &housing);
    printf("Food: ");
    scanf("%lf", &food);
    printf("Clothing: ");
    scanf("%lf", &clothing);
    printf("Transportation: ");
    scanf("%lf", &transportation);
    printf("Education: ");
    scanf("%lf", &education);
    printf("Health care: ");
    scanf("%lf", &healthCare);
    printf("Vacations: ");
    scanf("%lf", &vacations);

    // Calculate total expenses and FairTax
    totalExpenses = housing + food + clothing + transportation + education + healthCare + vacations;
    fairTax = totalExpenses * 0.30; // Using the 30% exclusive rate

    // Output the estimated FairTax
    printf("\nTotal expenses: $%.2f\n", totalExpenses);
    printf("Estimated FairTax you would pay: $%.2f\n", fairTax);

    return 0;
}
