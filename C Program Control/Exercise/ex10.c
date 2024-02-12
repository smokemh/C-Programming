// (Pythagorean Triples) A right triangle can have sides that are all integers. The set of three integer values for the sides of a right triangle is called a Pythagorean triple. These three sides must satisfy the relationship that the sum of the squares of two of the sides is equal to the square of the hypotenuse. Find all Pythagorean triples for side1, side2, and the hypotenuse all no larger than 500. Use a triple-nested for loop that simply tries all possibilities. This is an example of “brute-force” computing. It’s not aesthetically pleasing to many people. But there are many reasons why these techniques are important. First, with computing power increasing at such a phenomenal pace, solutions that would have taken years or even centuries of computer time to produce with the technology of just a few years ago can now be produced in hours, minutes or even seconds. Recent microprocessor chips can process a billion instructions per second! Second, as you’ll learn in more advanced computer science courses, there are large numbers of interesting problems for which there’s no known algorithmic approach other than sheer brute force. We investigate many kinds of problem-solving methodologies in this book. We’ll consider many brute-force approaches to various interesting problems.

#include <stdio.h>

int main()
{
    int side1, side2, hypotenuse;

    printf("Pythagorean triples up to 500:\n");

    for (side1 = 1; side1 <= 500; side1++)
    {
        for (side2 = 1; side2 <= 500; side2++)
        {
            for (hypotenuse = 1; hypotenuse <= 500; hypotenuse++)
            {
                if ((side1 * side1) + (side2 * side2) == (hypotenuse * hypotenuse))
                {
                    printf("%d, %d, %d\n", side1, side2, hypotenuse);
                }
            }
        }
    }

    return 0;
}
