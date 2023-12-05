// a file is a file is a file - dr. adams, 2023
#include <stdio.h>


int main(int argc, char * argv[]){

    FILE* fp; //file pointer
    fp = fopen("main.c", "r"); //handle to the file
    char c;
    int noc = 1;
    int sum = 0;

    if(fp == NULL){

        printf("Failed to open file\n");
        exit(1);

    }

    noc = fscanf(fp, "%c", &c);
    while(noc == 1){

        
        printf("%c", c);
        noc = fscanf(fp, "%c", &c);
        

    }

    fscanf(fp, "%c", &c);
    printf("%c", c);

    
    fclose(fp);

    return 0;

}