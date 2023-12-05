#include <stdio.h>

/*
Author: Sowndaryan J
Date: 10/23/2023

Purpose: The purpose of this program create a table of numbers that will show the number of steps it will take for a particular number to reach one according
to the Collatz conjecture

Time spent: I spent about 1 hour on this program


*/



int collatz_steps(int n) {
    int steps = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        steps++;
    }
    return steps;
}

void print_formatted_line(int number, int steps) {
    printf("%5d:%-5d  ", number, steps);
}

int main() {
    int start, end;

    printf("Enter a starting point: ");
    scanf("%d", &start);

    if (start <= 1 || start >= 1000) {
        printf("Starting integer must be > 1 and < 1000.\n");
        return 1;
    }

    printf("Enter an ending integer: ");
    scanf("%d", &end);

    if (end <= start || end >= 10000) {
        printf("Ending integer must be > starting integer and < 10000.\n");
        return 1;
    }



    for (int i = start; i <= end; i++) {
        int steps = collatz_steps(i);
        print_formatted_line(i, steps);

        // Print a maximum of 7 columns per line
        if ((i - start + 1) % 7 == 0) {
            printf("\n");
        }
    }

    return 0;
}
