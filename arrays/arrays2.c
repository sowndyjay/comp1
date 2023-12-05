#include <stdio.h>

int findLargestIndex(int n[], int size);
int main(int argc, char * argv[]){


    int numbers[10] = {4, 7, 5, 8, 3, 2, 1, 0, 9, 6};
    printf("The number of bytes in numbers is: %d\n", sizeof(numbers));
    printf("%d\n", findLargestIndex(numbers, 10));
    // sizeof(*numbers) - returns the number of bytes in the first element of the array because dereference numbers gives you value of FIRST element



}


int findLargestIndex(int n[], int size){

    int i = 0;
    int largestindex = 0;

    for( i = 0; i < size; i++){

       if(n[i] > n[largestindex]){

            largestindex = i;

       }
    }
    return largestindex;

}

//copy of the value of the argument and use it to initialize the formal parameters