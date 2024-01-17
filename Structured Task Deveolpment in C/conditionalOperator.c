// The conditional operator is a ternary operator in C, meaning it takes three operands.
// The basic syntax is: condition ? expression_if_true : expression_if_false.
// It is a concise way to express a conditional (if-else) statement in a single line.

#include <stdio.h>

int main()
{
    // Assume grade is a variable representing a student's score

    int grade = 75; // You can replace this with the actual grade value

    // Use the conditional operator to determine Pass or Fail
    printf("Result: %s\n", (grade >= 60) ? "Passed" : "Failed");

    // OR

    // puts(grade >= 60 ? "Passed" : "Failed");

    return 0;
}
