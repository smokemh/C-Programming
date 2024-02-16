// Write a program that uses repetition and switch statements to print the song “The Twelve Days of Christmas.” One switch statement should be used to print the day (i.e., “first,” “second,” etc.). A separate switch statement should be used to print the remainder of each verse.

#include <stdio.h>

int main()
{
    int day;
    for (day = 1; day <= 12; day++)
    {
        printf("On the ");
        switch (day)
        {
        case 1:
            printf("first");
            break;
        case 2:
            printf("second");
            break;
        case 3:
            printf("third");
            break;
        case 4:
            printf("fourth");
            break;
        case 5:
            printf("fifth");
            break;
        case 6:
            printf("sixth");
            break;
        case 7:
            printf("seventh");
            break;
        case 8:
            printf("eighth");
            break;
        case 9:
            printf("ninth");
            break;
        case 10:
            printf("tenth");
            break;
        case 11:
            printf("eleventh");
            break;
        case 12:
            printf("twelfth");
            break;
        }
        printf(" day of Christmas,\nMy true love sent to me:\n");

        switch (day)
        {
        case 12:
            printf("Twelve drummers drumming,\n");
        case 11:
            printf("Eleven pipers piping,\n");
        case 10:
            printf("Ten lords a-leaping,\n");
        case 9:
            printf("Nine ladies dancing,\n");
        case 8:
            printf("Eight maids a-milking,\n");
        case 7:
            printf("Seven swans a-swimming,\n");
        case 6:
            printf("Six geese a-laying,\n");
        case 5:
            printf("Five golden rings,\n");
        case 4:
            printf("Four calling birds,\n");
        case 3:
            printf("Three French hens,\n");
        case 2:
            printf("Two turtle doves, and\n");
        case 1:
            printf("A partridge in a pear tree.\n\n");
        }
    }
    return 0;
}
