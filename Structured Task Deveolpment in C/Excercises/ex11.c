//  (How Fast is Your Computer?) How can you determine how fast your own computer really operates? Write a C program with a while loop that counts from 1 to 1,000,000,000 by 1s. Every time the count reaches a multiple of 100,000,000, print that number on the screen. Use your watch to time how long each 100 million repetitions of the loop takes.

#include <stdio.h>

int main()
{
    long long int i = 1; // Use long long int to ensure the variable can hold large numbers

    // Start the loop
    while (i <= 1000000000)
    {
        if (i % 100000000 == 0)
        {
            printf("%lld\n", i); // Print the current count when it's a multiple of 100,000,000
        }
        i++; // Increment the counter
    }

    return 0;
}
