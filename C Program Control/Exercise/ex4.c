// The factorial function is used frequently in probability problems. The factorial of a positive integer n (written n! and pronounced “n factorial”) is equal to the product of the positive integers from 1 to n. Write a program that evaluates the factorials of the integers from 1 to 5. Print the results in tabular format. What difficulty might prevent you from calculating the factorial of 20?

#include <stdio.h>

// Function to calculate the factorial of a number
long long factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    printf("Number\tFactorial\n");
    for (int i = 1; i <= 5; i++)
    {
        printf("%d\t%lld\n", i, factorial(i));
    }
    return 0;
}

// Regarding the difficulty of calculating the factorial of 20, the primary concern is the size of the result. The factorial of 20 (20!) is a very large number (approximately 2.43 × 10^18), and it exceeds the maximum value that can be stored in a standard 32-bit integer variable. Even a 64-bit integer (long long in C, which typically offers up to 64 bits of precision) has a maximum value of about 9.22 × 10^18 (specifically, 2^63 - 1 for a signed long long), which means it can just barely represent 20!, but anything larger would overflow and cause incorrect results.
