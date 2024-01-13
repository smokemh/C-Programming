/* Write a C Program that define two variable one integer and one float print it out*/
#include <stdio.h>

void main(void)
{
    int data1; // define variable
    float data2;

    data1 = 105;
    printf("Number = %d\n", data1);
    printf("Data = %i , \t", data1);
    printf("%x\n\n", &data1);

    data2 = 520.89;
    printf("Fractional Number = %f\n", data2);
    printf("Exponential = %e\n", data2);
    printf("%x\n", &data2);
}