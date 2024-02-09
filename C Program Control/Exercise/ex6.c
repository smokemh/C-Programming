// Collecting money becomes increasingly difficult during periods of recession, so companies may tighten their credit limits to prevent their accounts receivable (money owed to them) from becoming too large. In response to a prolonged recession, one company has cut its customers’ credit limits in half. Thus, if a particular customer had a credit limit of $2000,it’s now $1000. If a customer had a credit limit of $5000, it’s now $2500. Write a program that analyzes the credit status of three customers of this company. For each customer you’re given:
// a) The customer’s account number
// b) The customer’s credit limit before the recession
// c) The customer’s current balance (i.e., the amount the customer owes the company).
// Your program should calculate and print the new credit limit for each customer and should determine (and print) which customers have current balances that exceed their new credit limits

#include <stdio.h>

int main()
{
    // Assuming a fixed number of customers for simplicity
    const int CUSTOMERS = 3;
    int accountNumber[CUSTOMERS];
    double oldCreditLimit[CUSTOMERS], currentBalance[CUSTOMERS], newCreditLimit[CUSTOMERS];

    // Input data for each customer
    for (int i = 0; i < CUSTOMERS; ++i)
    {
        printf("Enter the account number for customer %d: ", i + 1);
        scanf("%d", &accountNumber[i]);

        printf("Enter the credit limit before the recession for customer %d: ", i + 1);
        scanf("%lf", &oldCreditLimit[i]);

        printf("Enter the current balance for customer %d: ", i + 1);
        scanf("%lf", &currentBalance[i]);

        // Cut the credit limit in half
        newCreditLimit[i] = oldCreditLimit[i] / 2;
    }

    printf("\nCustomer Credit Analysis\n");
    printf("-------------------------\n");
    // Analyze and print the credit status for each customer
    for (int i = 0; i < CUSTOMERS; ++i)
    {
        printf("Customer %d - Account Number: %d\n", i + 1, accountNumber[i]);
        printf("Old Credit Limit: $%.2f\n", oldCreditLimit[i]);
        printf("New Credit Limit: $%.2f\n", newCreditLimit[i]);
        printf("Current Balance: $%.2f\n", currentBalance[i]);

        // Check if the current balance exceeds the new credit limit
        if (currentBalance[i] > newCreditLimit[i])
        {
            printf("Warning: Customer %d's current balance exceeds the new credit limit.\n", i + 1);
        }
        printf("\n");
    }

    return 0;
}
