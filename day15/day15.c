#include <stdio.h>

/*
Author: Sowndaryan Jayaprakash
Date: 11/01/2023
Sources of Help: notes
Time Spent: 35 mins

*/

void length_to_metric() {
    printf("Converting lengths from feet/inches to meters/centimeters.\n");
    
}

void length_to_us() {
    printf("Converting lengths from meters/centimeters to feet/inches.\n");
    
}

void weight_to_metric() {
    printf("Converting weights from pounds/ounces to kilograms/grams.\n");
   
}

void weight_to_us() {
    printf("Converting weights from kilograms/grams to pounds/ounces.\n");
    
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
            int lengthChoice;
            while (1) {
                printf("Select a length conversion option:\n");
                printf("1 - Feet/Inches to Meters/Centimeters\n");
                printf("2 - Meters/Centimeters to Feet/Inches\n");
                printf("0 - Back to main menu\n");
                scanf("%d", &lengthChoice);

                if (lengthChoice == 1) {
                    length_to_metric();
                } else if (lengthChoice == 2) {
                    length_to_us();
                } else if (lengthChoice == 0) {
                    break; // Return to the menu hopefully
                } else {
                    printf("Invalid choice. Please enter 0, 1, or 2.\n");
                }
            }
        } else if (choice == 2) {
            int weightChoice;
            while (1) {
                printf("Select a weight conversion option:\n");
                printf("1 - Pounds/Ounces to Kilograms/Grams\n");
                printf("2 - Kilograms/Grams to Pounds/Ounces\n");
                printf("0 - Back to main menu\n");
                scanf("%d", &weightChoice);

                if (weightChoice == 1) {
                    weight_to_metric();
                } else if (weightChoice == 2) {
                    weight_to_us();
                } else if (weightChoice == 0) {
                    break; // Return to the menu
                } else {
                    printf("Invalid choice. Please enter 0, 1, or 2.\n");
                }
            }
        } else if (choice == 0) {  //exit condition
            printf("Exiting the program.\n");
            break;
        } else {
            printf("Invalid choice. Please enter 0, 1, or 2.\n"); //anything other than valid input options
        }
    }

    return 0;
}
