/* Practice task 3 */

/* Write a program that takes three numbers from the user and prints the largest number.*/

#include <stdio.h>
void main()
{
    int A, B, C;
    printf("Enter Value of A,B and C \n");
    scanf("%d%d%d", &A, &B, &C);
    if (A > B)
    {
        if (A > C)
            printf("%d is the largest \n", A);
        else
            printf("%d is the largest \n", C);
    }
    else
    {
        if (B > C)

            printf("%d is the largest \n", B);
        else
            printf("%d is the largest \n", C);
    }
}

/* END */