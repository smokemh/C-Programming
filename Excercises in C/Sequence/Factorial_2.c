//Write a Program that Print Factorial of any Number
#include<stdio.h>

void main()
{

		int num, factorial = 1;

		printf( " Enter Number To Find Its Factorial:  ");

		scanf_s("%d",&num);

		for (int a = 1; a <= num; a++)

		{

			factorial = factorial*a;

		} printf("Factorial of Given Number is = %d\n", factorial);


	}