#include <stdio.h>


/*
Author: Sowndaryan Jayaprakashs
Date: 09/25/2023
Purpose: The purpose of this program is take user input of a positive integer that will print specific outputs depending on whether the integer is even or odd.
It will print the number divided by 2 if the user input number is even. If the user number is odd, it will print triple the original number plus one.

*/


int main(int argc, char * argv[]){

    int number;

    printf("Please enter a positive integer: ");
    scanf("%d", &number);
    

    if(number % 2 == 0){

        number = number / 2;

    }
    else{

        number = number * 3 + 1;

    }

    printf("%d", number);

    return 0;


}