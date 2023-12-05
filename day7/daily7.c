#include <stdio.h>

/*
Author: Sowndaryan Jayaprakash (Jay)

Purpose: The purpose this daily7 program is to convert a decimal representation of a nonnegative integer to its binary part through recursion.

*/


void print_binary(int x);

int main(int argc, char *argv[]) {
    print_binary(0);
    return 0;
}

void print_binary(int x) {
    if (x > 0) {
        
        print_binary(x / 2);
        printf("%d", x % 2);
    }
    else{
        printf("%d", 0);
    }
}