#include <stdio.h>

/*
Author: Sowndaryan Jayaprakash
Time spent: 1 hr
Sources: youtube, notes
Purpose: This program takes the integers located in 2 different text files and merges them into a single output file

*/

void mergeFiles(FILE *inputFile1, FILE *inputFile2, FILE *outputFile) {
    int num1, num2;

    
    int result1 = fscanf(inputFile1, "%d", &num1);
    int result2 = fscanf(inputFile2, "%d", &num2);

    // Continue until we reach the end of both files
    while (result1 == 1 && result2 == 1) {
        // Compare the numbers and write the smaller one to the output file
        if (num1 < num2) {
            fprintf(outputFile, "%d\n", num1);
            result1 = fscanf(inputFile1, "%d", &num1);
        } else {
            fprintf(outputFile, "%d\n", num2);
            result2 = fscanf(inputFile2, "%d", &num2);
        }
    }

    
    while (result1 == 1) {
        fprintf(outputFile, "%d\n", num1);
        result1 = fscanf(inputFile1, "%d", &num1);
    }

    
    while (result2 == 1) {
        fprintf(outputFile, "%d\n", num2);
        result2 = fscanf(inputFile2, "%d", &num2);
    }
}

int main() {
    // Open input files
    FILE *inputFile1 = fopen("numbers1.txt", "r");
    FILE *inputFile2 = fopen("numbers2.txt", "r");

    // Open output file
    FILE *outputFile = fopen("output.txt", "w");

    
    if (inputFile1 == NULL || inputFile2 == NULL || outputFile == NULL) {
        printf("Error opening files.\n");
        return 1; // Return an error code
    }

    
    mergeFiles(inputFile1, inputFile2, outputFile);

    // Close files
    fclose(inputFile1);
    fclose(inputFile2);
    fclose(outputFile);

    return 0; // Return success
}
