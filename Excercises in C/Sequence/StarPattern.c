
// Description: Print a star pattern using a do-while loop and nested for loops.
//  * * * * * * * * * *
//  * * * * * * * * * *
//      * * * * * * * *
//      * * * * * * * *
//          * * * * * *
//          * * * * * *
//              * * * *
//              * * * *
//                  * *
//                  * *

#include <stdio.h>

void main(void)
{
    int star = 0;
    int star2;

    do
    {
        star = star + 1;
        for (star2 = 10; star2 > star; star2--)
        {
            printf("*"`);
        }
        printf("\n");
    } while (star < 10);
}