/* Practice Task 1*/

/* Write a program that takes a number from the user and prints the day of the week accordingly.*/

/* For example, if the user enters 0, the program should print Sunday, if the user enters 1, the program should print Monday, and so on.*/

/* If the user enters a number other than 0 to 6, the program should print an error message.*/

#include <stdio.h>
void main()
{
    int day;
    printf(" 0 for sunday \n 1 for monday \n 2 for tuesday \n 3 for wednesday \n 4 for thursday \n 5 for friday \n 6 for saturday \n");
    scanf("%d", &day);
    switch (day)
    {
    case 0:
        printf("its sunday \n");
        break;
    case 1:
        printf("its monday \n");
        break;
    case 2:
        printf("its tuesday \n");
        break;
    case 3:
        printf("its wednesday \n");
        break;
    case 4:
        printf("its thursday \n");
        break;
    case 5:
        printf("its friday \n");
        break;
    case 6:
        printf("its saturday \n");
        break;
    default:
        printf("invalid day \n");
    }
}
