#include <stdio.h>

/*
Author: Sowndaryan (Jay)
Date: 10/02/2023
Time: It took me approximately 25 minutes to complete this program

*/


void clearBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(int argc, char *argv[]) {
    int num;

    while (1) {
        printf("Enter a negative integer: ");
        
        if (scanf("%d", &num) == 1) {
            if (num < 0) {
                printf("You entered a negative integer: %d\n", num);
                clearBuffer();
                break;
            } else {
                printf("I'm sorry, you must enter a negative integer less than 0.\n");
                clearBuffer();
            }
        } else {
            printf("I'm sorry, you must enter a negative integer less than 0.\n");
            clearBuffer();
        }
    }

    return 0;
}