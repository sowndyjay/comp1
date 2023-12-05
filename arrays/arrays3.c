#include <stdio.h>


void print_array(int n[], int size); //this will not work because there is nothing to see the size of the array
void consecutive_pair_sums(int n[], int size);
int out_of_order(double a[], int size);

int main(int argc, char * argv[]){

    int numbers[10] = {2, 5, 4, 1, 3, 9, 8, 7, 8, 6};

    

    return 0;

}


void print_array(int n[], int size){


    int i;

    for(i = 0; i < size; i++){

        printf("%d\n", n[i]);

    }

}

void consecutive_pair_sums(int n[], int size){

    int i;
    for(i = 0; i < size - 1; i++){

        printf("%d\n", n[i] + n[i+ 1]);

    }


}

int out_of_order(double n[], int size){

    int i;
    for( i = 0; i < size - 1; i++){

        if(n[i] > n[i+1]){

            return i;

        }

    }
    return -1;


}