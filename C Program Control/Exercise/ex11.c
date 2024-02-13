// Calculating Weekly Pay) A company pays its employees as managers (who receive a fixed weekly salary), hourly workers (who receive a fixed hourly wage for up to the first 40 hours they work and “time-and-a-half”—i.e., 1.5 times their hourly wage—for overtime hours worked), commission workers (who receive $250 plus 5.7% of their gross weekly sales), or pieceworkers (who receive a fixed amount of money for each of the items they produce—each pieceworker in this company works on only one type of item). Write a program to compute the weekly pay for each employee. You do not know the number of employees in advance. Each type of employee has its own pay code: Managers have paycode 1, hourly workers have code 2, commission workers have code 3 and pieceworkers have code 4. Use a switch to compute each employee’s pay based on that employee’s paycode. Within the switch, prompt the user (i.e., the payroll clerk) to enter the appropriate facts your C program needs to calculate each employee’s pay based on that employee’s paycode. [Note: You can input values of type double using the conversion specifier %lf with scanf.]

#include <stdio.h>

int main()
{
    int paycode;

    // Prompt for employee type
    printf("Enter paycode (-1 to end): ");
    scanf("%d", &paycode);

    while (paycode != -1)
    {
        switch (paycode)
        {
        case 1: // Manager
        {
            double weeklySalary;
            printf("Enter weekly salary: ");
            scanf("%lf", &weeklySalary);
            printf("Manager's pay is $%.2lf\n", weeklySalary);
            break;
        }
        case 2: // Hourly worker
        {
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
            break;
        }
        case 3: // Commission worker
        {
            double grossSales, totalPay;
            printf("Enter gross weekly sales: ");
            scanf("%lf", &grossSales);
            totalPay = 250 + (grossSales * 0.057);
            printf("Commission worker's pay is $%.2lf\n", totalPay);
            break;
        }
        case 4: // Pieceworker
        {
            double amountPerItem, numberOfItems, totalPay;
            printf("Enter amount paid per item: ");
            scanf("%lf", &amountPerItem);
            printf("Enter number of items produced: ");
            scanf("%lf", &numberOfItems);
            totalPay = amountPerItem * numberOfItems;
            printf("Pieceworker's pay is $%.2lf\n", totalPay);
            break;
        }
        default:
            printf("Invalid paycode entered.\n");
        }

        // Prompt for next employee type or to exit
        printf("\nEnter paycode (-1 to end): ");
        scanf("%d", &paycode);
    }

    return 0;
}
