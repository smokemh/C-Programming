/* Task 2*/

/* Write a program that takes two numbers A and B as input and an operator opcode (+, -, *, /) and performs the operation on A and B. */

#include <stdio.h>
#include <conio.h>
void main()
{
    float A, B, result;
    char opcode;
    printf("Enter A and B \n");
    scanf("%f%f", &A, &B);
    printf("+ for addition \n");
    printf("- for substraction \n");
    printf("* for multiplication \n");
    printf("/ for division \n");
    printf("Enter Your OpCode \n");
    opcode = getch();

    switch (opcode)
    {
    case '+':
        result = A + B;
        printf("Sum is = %.0f  \n", result);
        break;
    case '-':
        result = A - B;
        printf("Difference is =%.0f  \n", result);
        break;
    case '*':
        result = A * B;
        printf("product is = %.0f \n", result);
        break;
    case '/':
        if (B == 0)
            printf("Error Divided by zero  \n");
        else
        {
            result = A / B;
            printf("quotient is =%f  \n", result);
        }
        break;
    default:
        printf("Invalid Choice \n");
        break;
    }
}

/* END */