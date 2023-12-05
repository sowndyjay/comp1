#include <stdio.h>

/*
Author: Sowndaryan Jayaprakash
Date: 10/30/23
Purpose: the purpose of this program is to practice top down design for a length and weight conversion system
Source: notes, w3schools
time spent: 25 mins

*/

void convert_lengths() {
    printf("Lengths conversion selected.\n");
}

void convert_weights() {
    printf("Weights conversion selected.\n");
}

int main(int argc, char * argv[]) {
    int choice;

    while (1) {
        printf("Select an option:\n");
        printf("1 - Convert lengths\n");
        printf("2 - Convert weights\n");
        printf("0 - Exit\n");

        scanf("%d", &choice);

        if (choice == 1) {
            convert_lengths();
        } else if (choice == 2) {
            convert_weights();
        } else if (choice == 0) {
            printf("Exiting the program.\n");
            break;
        } else {
            printf("Invalid choice. Please enter 0, 1, or 2.\n");
        }
    }

    return 0;
}