#include <stdio.h>

/*
Name: Sowndaryan Jayaprakash
Date: 11/20/23
Purpose: The purpose of my program is to display the results of a green crud population growth according to the fibbonaci sequence
Time spent: 1 hr

*/

int main() {
    int initial_population;
    int num_days;
    int final_population = 0;
    int previous_population;
    int i;
    int temp;

    char cond = 'y';


    while (cond == 'y') {

        printf("Enter initial population: ");
        scanf("%d", &initial_population);

        printf("Enter number of days: ");
        scanf("%d", &num_days);

        previous_population = initial_population;
        final_population = initial_population;

        if (num_days < 5) {
            printf("With an initial population of %d after growing for 0 days, the final population would be %d pounds\n", initial_population);
        } else {
            for (i = 5; i < num_days; i += 5) {
                temp = final_population;
                final_population = previous_population + final_population;
                previous_population = temp;
            }
            printf("After %d days, the green crud population would be %d pounds\n", num_days, final_population);
        }

        printf("Would you like to continue? (y/n)\n");
        scanf(" %c", &cond); 
    }

    return 0;
}
