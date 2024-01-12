/* This C program simulates a customer service center menu. It presents a menu with different options for new connection, complaints, tariff details, and operator assistance. The user is prompted to choose an option, and the program uses a switch statement to provide relevant information or feedback based on the selected option.

*/

#include <stdio.h>

void main()
{
    int menu_opion;
    printf(" *** Welcome to CUST Service Centre. ***\n");
    printf(" Entre 4 for New Connection .\n");
    printf(" Entre 3 for Complanints .\n");
    printf(" Entre 2 for Tariff Details .\n");
    printf(" Entre 1 for the operator .\n");
    printf(" Your Option = ");
    scanf("%d", &menu_opion);

    switch (menu_opion)
    {
    case 4:
        printf("Process for new admission has started. Thanks\n");
        break;
    case 3:
        printf("Your application will be processed. Thanks\n");

    case 2:
        printf("Free Structure will be mailed to your postal address. Thanks\n");

    case 1:
        printf("Your Call will be forwarded to the operator. Thanks\n");

    default:
        printf("You have selected wrong option.\n");
    }
}