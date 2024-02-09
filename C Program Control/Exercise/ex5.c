// Write a program that prints the following patterns separately, one below the other. Use for loops to generate the patterns. All asterisks (*) should be printed by a single printf statement of the form printf( "%s", "*" ); (this causes the asterisks to print side by side). [Hint: The last two patterns require that each line begin with an appropriate number of blanks.]

#include <stdio.h>

// A //
// *
// **
// ***
// ****
// *****
// ******
// *******
// ********
// *********
// **********
void printPatternA(int size)
{
    for (int row = 1; row <= size; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            printf("%s", "*");
        }
        printf("\n");
    }
}

// B //
// **********
// *********
// ********
// *******
// ******
// *****
// ****
// ***
// **
// *
void printPatternB(int size)
{
    for (int row = 1; row <= size; row++)
    {
        for (int col = row; col <= size; col++)
        {
            printf("%s", "*");
        }
        printf("\n");
    }
}

// C //
// **********
//  *********
//   ********
//    *******
//     ******
//      *****
//       ****
//        ***
//         **
//          *
void printPatternC(int size)
{
    for (int row = 1; row <= size; row++)
    {
        for (int col = 1; col < row; col++)
        {
            printf(" ");
        }
        for (int col = row; col <= size; col++)
        {
            printf("%s", "*");
        }
        printf("\n");
    }
}

// D //
//          *
//         **
//        ***
//       ****
//      *****
//     ******
//    *******
//   ********
//  *********
// **********
void printPatternD(int size)
{
    for (int row = 1; row <= size; row++)
    {
        for (int col = row; col < size; col++)
        {
            printf(" ");
        }
        for (int col = 1; col <= row; col++)
        {
            printf("%s", "*");
        }
        printf("\n");
    }
}

int main()
{
    int size = 10; // Size of the patterns, can be changed as needed

    // Print each pattern
    printPatternA(size);
    printf("\n");
    printPatternB(size);
    printf("\n");
    printPatternC(size);
    printf("\n");
    printPatternD(size);

    return 0;
}
