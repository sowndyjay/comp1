#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

//this code looks at a different variation of noc, where we look to see that noc can be three things
//a positive number, zero, or EOF (end of file)

int main(int argc, char * argv){

    int noc;
    int number;
    int sum;
    char c;
    FILE* fp;

    fp = fopen("numbers.txt", "r");

    noc = fscanf(fp, "%d", &number);

    if(fp == NULL){

        printf("Failed to read");
        exit(1);

    }

    while(noc == 1 || feof(fp)){


        if(noc == 1){

            sum += number;
            printf("%d\n", number);

        }
        else{

            fscanf(fp, "%c", &c);

        }
        noc = fscanf(fp, "%d", &number);

    }

    printf("The sum is: %d", sum);

    fclose(fp);

    return 0;

}