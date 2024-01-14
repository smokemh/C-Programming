/* write a C program that prints the following pattern
 */
// **********
//  *********
//   ********
//    *******
//     ******
//      *****
//       ****
//        ***
//         **
//          *

#include <stdio.h> //Right

void main(void)
{
    int star = 0;
    int star2;
    int nstd;
    do
    {
        star = star + 1;

        for (star2 = 10; star2 > star; star2--)
        {
            printf("*");
        }
        printf("\n");

        for (nstd = 0; nstd < star; nstd++)
        {
            printf(" ");
        }
    } while (star < 10);
}
