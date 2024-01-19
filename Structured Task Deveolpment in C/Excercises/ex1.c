// (Credit Limit Calculator) Develop a C program that will determine if a department store customer has exceeded the credit limit on a charge account. For each customer, the following facts
// are available:
// a) Account number
// b) Balance at the beginning of the month
// c) Total of all items charged by this customer this month
// d) Total of all credits applied to this customer's account this month
// e) Allowed credit limit
// The program should input each fact, calculate the new balance (= beginning balance + charges – credits), and determine whether the new balance exceeds the customer's credit limit. For those customers whose credit limit is exceeded, the program should display the customer's account number, credit limit, new balance and the message “Credit limit exceeded.”

#include <stdio.h>

int main()
{
    // Declare variables
    int accountNumber;
    double beginningBalance, totalCharges, totalCredits, creditLimit, newBalance;

    // Input customer information
    printf("Enter account number: ");
    scanf("%d", &accountNumber);

    printf("Enter beginning balance: ");
    scanf("%lf", &beginningBalance);

    printf("Enter total charges: ");
    scanf("%lf", &totalCharges);

    printf("Enter total credits: ");
    scanf("%lf", &totalCredits);

    printf("Enter credit limit: ");
    scanf("%lf", &creditLimit);

    // Calculate new balance
    newBalance = beginningBalance + totalCharges - totalCredits;

    // Check if new balance exceeds credit limit
    printf("\nAccount Number: %d\n", accountNumber);
    printf("Credit Limit: %.2lf\n", creditLimit);
    printf("New Balance: %.2lf\n", newBalance);

    if (newBalance > creditLimit)
    {
        printf("Credit limit exceeded.\n");
    }
    else
    {
        printf("Credit limit not exceeded.\n");
    }

    return 0;
}
