/* Write a program to print the following series using a for loop
 */
#include <stdio.h>
void main()
{
    int x, y;
    x = 0;
    for (y = 0; y <= 20; y += 2)
    {

        printf(" x %d = %d \n", x, y);
        x = x + 1;
    }
}
