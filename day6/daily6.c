#include <stdio.h>

/*
Author: Sowndaryan Jayaprakash (Jay)

Question: I did not receive an error when using a value such as 500000, however, the program exited after the value 435636 printed.

*/

void recursive_down_to_zero(int x);
void recursive_up_to_int(int x);

int main(int argc, char * argv[]){

    recursive_down_to_zero(850000);  
    printf("****\n");
    recursive_up_to_int(850000);
    return 0;


}

void recursive_down_to_zero(int x){

    if(x >= 0){

        printf("%d\n", x);
        recursive_down_to_zero(x - 1);

    }

}

void recursive_up_to_int(int x){

    
    if(x >= 0){

        recursive_up_to_int(x - 1);
        printf("%d\n", x);

    }

}