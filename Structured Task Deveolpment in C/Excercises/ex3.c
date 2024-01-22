// Write a Program to check whether a character is vowel or not using if else statement.

#include <stdio.h>

#define A 'a'
#define E 'e'
#define I 'i'
#define O 'o'
#define U 'u'

int main()
{
    char Alp;

    printf("Enter character \n");
    scanf("%c", &Alp);

    if (Alp == A || Alp == E || Alp == I || Alp == O || Alp == U || Alp == A - 'a' + 'A' || Alp == E - 'a' + 'A' || Alp == I - 'a' + 'A' || Alp == O - 'a' + 'A' || Alp == U - 'a' + 'A')
    {
        printf("It is a vowel \n");
    }
    else
    {
        printf("It is not a vowel \n");
    }

    return 0;
}
