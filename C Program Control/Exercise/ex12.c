// Rewrite the previous ex11 program  by replacing the switch statement with a nested if…else statement; be careful to deal with the default case properly. Then rewrite this new version by replacing the nested if…else statement with a series of if statements; here, too, be careful to deal with the default case properly (this is more difficult than in the nested if…else version). This exercise demonstrates that switch is a convenience and that any switch statement can be written with only single-selection statements.

//////////////////////////////
//   Using Nested if else  //
/////////////////////////////
#include <stdio.h>

int main()
{
    int paycode;

    // Prompt for employee type
    printf("Enter paycode (-1 to end): ");
    scanf("%d", &paycode);

    while (paycode != -1)
    {
        if (paycode == 1)
        { // Manager
            double weeklySalary;
            printf("Enter weekly salary: ");
            scanf("%lf", &weeklySalary);
            printf("Manager's pay is $%.2lf\n", weeklySalary);
        }
        else if (paycode == 2)
        { // Hourly worker
            double hourlyWage, hoursWorked, overtime = 0.0, totalPay;
            printf("Enter hourly wage: ");
            scanf("%lf", &hourlyWage);
            printf("Enter total hours worked: ");
            scanf("%lf", &hoursWorked);

            if (hoursWorked > 40)
            {
                overtime = (hoursWorked - 40) * (hourlyWage * 1.5);
                hoursWorked = 40;
            }

            totalPay = (hoursWorked * hourlyWage) + overtime;
            printf("Hourly worker's pay is $%.2lf\n", totalPay);
        }
        else if (paycode == 3)
        { // Commission worker
            double grossSales, totalPay;
            printf("Enter gross weekly sales: ");
            scanf("%lf", &grossSales);
            totalPay = 250 + (grossSales * 0.057);
            printf("Commission worker's pay is $%.2lf\n", totalPay);
        }
        else if (paycode == 4)
        { // Pieceworker
            double amountPerItem, numberOfItems, totalPay;
            printf("Enter amount paid per item: ");
            scanf("%lf", &amountPerItem);
            printf("Enter number of items produced: ");
            scanf("%lf", &numberOfItems);
            totalPay = amountPerItem * numberOfItems;
            printf("Pieceworker's pay is $%.2lf\n", totalPay);
        }
        else
        { // Invalid paycode
            printf("Invalid paycode entered.\n");
        }

        // Prompt for next employee type or to exit
        printf("\nEnter paycode (-1 to end): ");
        scanf("%d", &paycode);
    }

    return 0;
}

//////////////////////////////
//   Using Series of if    //
/////////////////////////////
#include <stdio.h>

int main()
{
    int paycode;

    // Prompt for employee type
    printf("Enter paycode (-1 to end): ");
    scanf("%d", &paycode);

    while (paycode != -1)
    {
        int validPaycode = 0;

        if (paycode == 1)
        {
            validPaycode = 1;
            double weeklySalary;
            printf("Enter weekly salary: ");
            scanf("%lf", &weeklySalary);
            printf("Manager's pay is $%.2lf\n", weeklySalary);
        }

        if (paycode == 2)
        {
            validPaycode = 1;
            double hourlyWage, hoursWorked, overtime = 0.0, totalPay;
            printf("Enter hourly wage: ");
            scanf("%lf", &hourlyWage);
            printf("Enter total hours worked: ");
            scanf("%lf", &hoursWorked);

            if (hoursWorked > 40)
            {
                overtime = (hoursWorked - 40) * (hourlyWage * 1.5);
            }

            totalPay = (hoursWorked > 40 ? 40 : hoursWorked) * hourlyWage + overtime;
            printf("Hourly worker's pay is $%.2lf\n", totalPay);
        }

        if (paycode == 3)
        {
            validPaycode = 1;
            double grossSales, totalPay;
            printf("Enter gross weekly sales: ");
            scanf("%lf", &grossSales);
            totalPay = 250 + (grossSales * 0.057);
            printf("Commission worker's pay is $%.2lf\n", totalPay);
        }

        if (paycode == 4)
        {
            validPaycode = 1;
            double amountPerItem, numberOfItems, totalPay;
            printf("Enter amount paid per item: ");
            scanf("%lf", &amountPerItem);
            printf("Enter number of items produced: ");
            scanf("%lf", &numberOfItems);
            totalPay = amountPerItem * numberOfItems;
            printf("Pieceworker's pay is $%.2lf\n", totalPay);
        }

        if (!validPaycode)
        {
            printf("Invalid paycode entered.\n");
        }

        // Prompt for next employee type or to exit
        printf("\nEnter paycode (-1 to end): ");
        scanf("%d", &paycode);
    }

    return 0;
}
