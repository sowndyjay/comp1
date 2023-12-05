#include <stdio.h>


/*
Author: Sowndaryan (jay)
Purpose: The purpose of this program is to take a user input of an integer value from 1-79 and to print the number of asterisks that the user wants.
Time Spent: This assignment took me about 25 minutes

*/

void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void draw_line(int num_asterisks) {

    for (int i = 0; i < num_asterisks; i++) {
        printf("*");
    }

    printf("\n");
}

int main() {
    int num_asterisks;

    do {

        printf("Enter the number of asterisks (1 to 79): ");
        if (scanf("%d", &num_asterisks) != 1) {

            printf("Im sorry, this input is unrecognized or out of range. Please try [1-79].\n");
            clearBuffer();  // Clear the buffer in case of invalid input
            continue;

        }

        if (num_asterisks < 1 || num_asterisks > 79) {

            printf("Im sorry, this input is unrecognized or out of range. Please try [1-79].\n");

        } 
        else {

            draw_line(num_asterisks);
            break;
        }

    } while (1);  // Loop until a valid input is received

    return 0;
}






