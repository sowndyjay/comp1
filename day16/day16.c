#include <stdio.h>
#include <math.h>


/*
Program: Weight and Height Converter
Name: Sowndaryan Jayaprakash
Date: 11/09/23
Time spent: 1 hr

Sources of Help: notes, math

Purpose: The purpose of my program is take user inputted weights or heights in either metric or US system and to convert it to the system of their choice


*/

// Functions
void length_to_metric();
void length_to_us();
void weight_to_metric();
void weight_to_us();
void input_length(int *feet, double *inches);
void convert_length_to_metric(int feet, double inches, double *meters, double *centimeters);
void convert_length_to_us(double meters, double centimeters, int *feet, double *inches);
void output_length(double meters, double centimeters);

void input_weight(int *pounds, double *ounces);
void convert_weight_to_metric(int pounds, double ounces, double *kilograms, double *grams);
void convert_weight_to_us(double kilograms, double grams, int *pounds, double *ounces);
void output_weight(double kilograms, double grams);

int main() {
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
                printf("0 - Back to the main menu\n");
                scanf("%d", &lengthChoice);

                if (lengthChoice == 1) {
                    length_to_metric();
                } else if (lengthChoice == 2) {
                    length_to_us();
                } else if (lengthChoice == 0) {
                    break; // Return to the main menu hopefully
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
                printf("0 - Back to the main menu\n");
                scanf("%d", &weightChoice);

                if (weightChoice == 1) {
                    weight_to_metric();
                } else if (weightChoice == 2) {
                    weight_to_us();
                } else if (weightChoice == 0) {
                    break; // Return to the main menu hopefully 
                } else {
                    printf("Invalid choice. Please enter 0, 1, or 2.\n");
                }
            }
        } else if (choice == 0) { // Exit statement
            printf("Exiting the program.\n");
            break;
        } else {
            printf("Invalid choice. Please enter 0, 1, or 2.\n"); // any invalid inputs
        }
    }

    return 0;
}

// input length in feet and inches
void input_length(int *feet, double *inches) {
    printf("Enter the length in feet: ");
    scanf("%d", feet);

    printf("Enter the length in inches: ");
    scanf("%lf", inches);
}

// convert length to metric
void convert_length_to_metric(int feet, double inches, double *meters, double *centimeters) {
    double totalInches = feet * 12 + inches;
    *meters = totalInches * 0.0254; // 1 inch = 0.0254 meters
    *centimeters = (totalInches * 0.0254 - *meters) * 100;
}

// convert length to US units
void convert_length_to_us(double meters, double centimeters, int *feet, double *inches) {
    double totalInches = (meters + centimeters / 100) / 0.0254;
    *feet = totalInches / 12;
    *inches = fmod(totalInches, 12);
}

// output length in meters and centimeters
void output_length(double meters, double centimeters) {
    printf("Equivalent length in meters and centimeters: %.2f meters %.2f centimeters\n", meters, centimeters);
}

// input weight in pounds and ounces
void input_weight(int *pounds, double *ounces) {
    printf("Enter the weight in pounds: ");
    scanf("%d", pounds);

    printf("Enter the weight in ounces: ");
    scanf("%lf", ounces);
}

// convert weight to metric
void convert_weight_to_metric(int pounds, double ounces, double *kilograms, double *grams) {
    *kilograms = pounds * 0.453592; // 1 pound = 0.453592 kilograms
    *grams = ounces * 28.3495; // 1 ounce = 28.3495 grams
}

// convert weight to US units
void convert_weight_to_us(double kilograms, double grams, int *pounds, double *ounces) {
    *pounds = kilograms / 0.453592; // 1 pound = 0.453592 kilograms
    *ounces = grams / 28.3495; // 1 ounce = 28.3495 grams
}

// output weight in kilograms and grams
void output_weight(double kilograms, double grams) {
    printf("Equivalent weight in kilograms and grams: %.2f kilograms %.2f grams\n", kilograms, grams);
}

// handle length to metric conversion
void length_to_metric() {
    int feet;
    double inches;
    double meters, centimeters;

    input_length(&feet, &inches);
    convert_length_to_metric(feet, inches, &meters, &centimeters);
    output_length(meters, centimeters);
}

// handle length to US units conversion
void length_to_us() {
    double meters, centimeters;
    int feet;
    double inches;

    printf("Enter the length in meters: ");
    scanf("%lf", &meters);

    printf("Enter the length in centimeters: ");
    scanf("%lf", &centimeters);

    convert_length_to_us(meters, centimeters, &feet, &inches);
    printf("Equivalent length in feet and inches: %d feet %.2f inches\n", feet, inches);
}

// handle weight to metric conversion
void weight_to_metric() {
    int pounds;
    double ounces;
    double kilograms, grams;

    input_weight(&pounds, &ounces);
    convert_weight_to_metric(pounds, ounces, &kilograms, &grams);
    output_weight(kilograms, grams);
}

// handle weight to US units conversion
void weight_to_us() {
    double kilograms, grams;
    int pounds;
    double ounces;

    printf("Enter the weight in kilograms: ");
    scanf("%lf", &kilograms);

    printf("Enter the weight in grams: ");
    scanf("%lf", &grams);

}

