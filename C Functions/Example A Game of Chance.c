#include <stdio.h>
#include <stdlib.h>
#include <time.h> // contains prototype for function time

// enumeration constants represent game status
enum Status
{
    CONTINUE,
    WON,
    LOST
};

// function prototype for rolling dice
int rollDice(void);

int main(void)
{
    int sum;                // sum of rolled dice
    int myPoint;            // player must make this point to win
    enum Status gameStatus; // can contain CONTINUE, WON, or LOST

    // randomize random number generator using current time
    srand(time(NULL));

    sum = rollDice(); // first roll of the dice

    // determine game status based on sum of dice
    switch (sum)
    {
    // win on first roll
    case 7:               // 7 is a winner
    case 11:              // 11 is a winner
        gameStatus = WON; // game has been won
        break;

    // lose on first roll
    case 2:                // 2 is a loser
    case 3:                // 3 is a loser
    case 12:               // 12 is a loser
        gameStatus = LOST; // game has been lost
        break;

    // remember point
    default:
        gameStatus = CONTINUE; // player should keep rolling
        myPoint = sum;         // remember the point
        printf("Point is %d\n", myPoint);
        break; // optional
    }          // end switch

    // while game not complete
    while (CONTINUE == gameStatus)
    {                     // player should keep rolling
        sum = rollDice(); // roll dice again

        // determine game status
        if (sum == myPoint)
        {                     // win by making point
            gameStatus = WON; // game over, player won
        }
        else if (7 == sum)
        {                      // lose by rolling 7
            gameStatus = LOST; // game over, player lost
        }
    } // end while

    // display won or lost message
    if (WON == gameStatus)
    { // did player win?
        puts("Player wins");
    }
    else
    { // player lost
        puts("Player loses");
    }
    return 0; // indicate successful termination
} // end main

// roll dice, calculate sum and display results
int rollDice(void)
{
    int die1;    // first die
    int die2;    // second die
    int workSum; // sum of dice

    die1 = 1 + (rand() % 6); // pick random die1 value
    die2 = 1 + (rand() % 6); // pick random die2 value
    workSum = die1 + die2;   // sum die1 and die2

    // display results of this roll
    printf("Player rolled %d + %d = %d\n", die1, die2, workSum);
    return workSum; // return sum of dice
} // end function rollDice
