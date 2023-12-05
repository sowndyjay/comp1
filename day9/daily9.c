#include <stdio.h>

/*
Author: Sowndaryan Jayaprakash
Date: 09/25/2023

Question: When I enter a large integer, the program displays each of the new numbers in real time versus in daily6, a lot of the printed values were displayed at once
I believe due to the efficiency of the recursive method, where it works more quickly than the while loop. Something to do with big O notation idk;

*/

void loop_down_to_zero(int number);
void loop_up_to_int(int number);

int main(int argc, char * argv[]){

    int number;
    printf("Please enter a positive integer:");
    scanf("%d", &number);

    loop_down_to_zero(number);
    printf("****\n");
    loop_up_to_int(number);


}


void loop_down_to_zero(int number){

    while(number >= 0){

        printf("%d\n", number);
        number--;

    }

}

void loop_up_to_int(int number){

    int value = 0;

    while(value <= number){

        printf("%d\n", value);
        value++;

    }



}