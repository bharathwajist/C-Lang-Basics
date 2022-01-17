#include <stdio.h>
#include <stdlib.h>
#include <time.h>       // Contains prototype for function time

// Enumeration constants represent game status
enum Status{CONTINUE, WON, LOST};

int rollDice(void);     // Function prototype

int main(void){
    // randomize random number generator using current time
    srand(time(NULL));

    int myPoint;    // Player must make this point to win
    enum Status gameStatus;     // can contain CONTINUE, WON, or LOST
    int sum = rollDice();       // First roll of the dice

    // determine game status based on sum of dice
    switch(sum){

        // win n first roll
        case 7:     // 7 is a winner
        case 11:    // 11 is a winner
            gameStatus = WON;
            break;
        
        // lose on first roll
        case 2:     // 2 is a loser
        case 3:     // 3 is a loser
        case 12:    // 12 is a loser
            gameStatus = LOST;
            break;
        
        // Remember point
        default:
            gameStatus = CONTINUE;          // player should keep rolling
            myPoint = sum;                  // remember the point
            printf("Point is %d\n",myPoint);
            break;  // optional
    }

    // While game is not completed
    while(CONTINUE == gameStatus){          // player should keep rolling
        sum = rollDice();                   // roll dice again

        // determine game status
        if(sum == myPoint){                 // win by making point
            gameStatus = WON;
        }else{
            if(7==sum){                     // win by rolling 7
                gameStatus = LOST;
            }
        }
    }

    // Display won or lost message
    if(WON==gameStatus){
        puts("Player wins");
    }else{
        puts("Player loses");
    }
}

int rollDice(void){
    int die1 = 1+(rand()%6);    // Pick random dies1 value
    int die2 = 1+(rand()%6);    // Pick random dies2 value

    // display results of this roll
    printf("Player rolled %d + %d = %d\n",die1,die2,die1+die2);
    return die1+die2;
}