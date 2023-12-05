#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
Author: Sowndaryan Jayaprakash
Purpose: To play rock paper scissors

Time spent: 1.2 hours

*/


enum Choice {
    ROCK,
    PAPER,
    SCISSORS
};

enum Choice getChoice() {
    char choice;

    printf("Please enter your choice: (R)ock, (P)aper, or (S)cissors: ");
    scanf(" %c", &choice);

    choice = toupper(choice);

    while (choice != 'R' && choice != 'S' && choice != 'P') { 

        printf("Invalid choice. Please enter (R)ock, (P)aper, or (S)cissors: ");
        scanf(" %c", &choice);

    }

    switch (choice) {
        case 'P':
            return PAPER;
        case 'R':
            return ROCK;
        case 'S':
            return SCISSORS;
        default:
            return ROCK;  // i dont know if the switch ever gets here, but just to prevent it from breaking
    }
}

void getWinner(enum Choice player1, enum Choice player2) {
    if (player1 == player2) {

        printf("It's a draw!\n");

    } 
    else if ((player1 == PAPER && player2 == ROCK) || (player1 == ROCK && player2 == SCISSORS) ||(player1 == SCISSORS && player2 == PAPER)) {
        printf("Player 1 wins: ");

        
        switch (player1) {
            case PAPER:
                printf("Paper covers Rock.\n");
                break;
            case ROCK:
                printf("Rock breaks Scissors.\n");
                break;
            case SCISSORS:
                printf("Scissors cut Paper.\n");
                break;
            default:
                printf("Invalid choice for Player 1.\n");
                break;
        }
    } else {
        printf("Player 2 wins: ");

        // Print the basis for winning
        switch (player2) {
            case PAPER:
                printf("Paper covers Rock.\n");
                break;
            case ROCK:
                printf("Rock breaks Scissors.\n");
                break;
            case SCISSORS:
                printf("Scissors cut Paper.\n");
                break;
            default:
                printf("Invalid choice for Player 2.\n");
                break;
        }
    }
}

int main() {
    char playAgain;

    do {
        printf("Player-1, it is your turn.\n");
        enum Choice player1Choice = getChoice();

        printf("Player-2, it is your turn.\n");
        enum Choice player2Choice = getChoice();

        getWinner(player1Choice, player2Choice);

        printf("Do you want to play again (y/n): ");
        scanf(" %c", &playAgain);
        playAgain = toupper(playAgain);

    } while (playAgain == 'Y');

    printf("Thanks for playing!\n");

    return 0;
}



