// Calculate the value of π from the infinite series

// π=  4 - 4/3+4/5- 4/7+4/9- 4/11 +.....

// Print a table that shows the value of π approximated by one term of this series, by two terms, by three terms, and so on. How many terms of this series do you have to use before you first get 3.14? 3.141? 3.1415? 3.14159?

#include <stdio.h>
#include <math.h>

int main()
{
    double pi = 0.0;
    int term;
    int termsFor3_14 = 0, termsFor3_141 = 0, termsFor3_1415 = 0, termsFor3_14159 = 0;
    printf("Term\tApproximation of Pi\n");

    for (term = 1; term <= 1000000; term++)
    {
        // Calculate the value of pi using the series
        pi += pow(-1, term + 1) * 4.0 / (2 * term - 1);

        // Print every 100th term to keep the output manageable
        if (term % 100 == 0)
        {
            printf("%d\t%.15f\n", term, pi);
        }

        // Check for the accuracy of pi
        if (!termsFor3_14 && pi >= 3.14 && pi < 3.15)
            termsFor3_14 = term;
        if (!termsFor3_141 && pi >= 3.141 && pi < 3.142)
            termsFor3_141 = term;
        if (!termsFor3_1415 && pi >= 3.1415 && pi < 3.1416)
            termsFor3_1415 = term;
        if (!termsFor3_14159 && pi >= 3.14159 && pi < 3.1416)
            termsFor3_14159 = term;

        // Break out of the loop if all milestones are reached
        if (termsFor3_14 && termsFor3_141 && termsFor3_1415 && termsFor3_14159)
        {
            break;
        }
    }

    printf("\nTo reach 3.14, it took %d terms.\n", termsFor3_14);
    printf("To reach 3.141, it took %d terms.\n", termsFor3_141);
    printf("To reach 3.1415, it took %d terms.\n", termsFor3_1415);
    printf("To reach 3.14159, it took %d terms.\n", termsFor3_14159);

    return 0;
}
