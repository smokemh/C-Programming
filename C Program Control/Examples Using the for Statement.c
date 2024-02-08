// 1. Vary the control variable from 1 to 100 in increments of 1.
for (int i = 1; i <= 100; ++i)
{
    // Code to execute in each iteration
}

// 2. Vary the control variable from 100 to 1 in increments of - 1(decrements of
for (int i = 100; i >= 1; --i)
{
    // Code to execute in each iteration
}

// 3. Vary the control variable from 7 to 77 in steps of 7.
for (int i = 7; i <= 77; i += 7)
{
    // Code to execute in each iteration
}

// 4. Vary the control variable from 20 to 2 in steps of - 2.
for (int i = 20; i >= 2; i -= 2)
{
    // Code to execute in each iteration
}

// 5. Vary the control variable over the following sequence of values : 2, 5, 8, 11, 14, 17.
for (int i = 2; i <= 17; i += 3)
{
    // Code to execute in each iteration
}

// 6. Vary the control variable over the following sequence of values : 44, 33, 22, 11, 0.
for (int i = 44; i >= 0; i -= 11)
{
    // Code to execute in each iteration
}

// Application: Summing the Even Integers from 2 to 100
// The following program uses a for statement to sum the even integers from 2 to 100. The program initializes the variable sum to 0 and then uses a for statement to add each even integer from 2 to 100 to sum. The program then displays the sum. The for statement in this program uses the initialization, repetition condition, and increment all in the for statement header. This is a common way to use the for statement when the control variable is used only in the for statement. The program in Fig. 4.5 uses a for statement to sum the even integers from 2 to 100.

#include <stdio.h>

int main(void)
{
    int sum = 0;

    for (int i = 2; i <= 100; i += 2)
    {
        sum += i;
    }

    printf("Sum of even integers from 2 to 100 is: %d\n", sum);

    return 0;
}