#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, char *argv[]){

    int num;
    char c;
    int noc;
    FILE* fp;

    fp = fopen("numbers.txt", "r");


    noc = fscanf(fp, "%c", &c);

    while(noc == 1){

        printf("%c : ", c);

        if(isalpha(c)){
            printf(" is an alphabetical character");
        }
        if(islower(c)){
            printf(" is lower case");
        }

        printf("\n");
        noc = fscanf(fp, "%c", &c);


    }

    fclose(fp);

    return 0;

}