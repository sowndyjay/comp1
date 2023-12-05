#include <stdio.h>


void f(int x, int y, int z);
int main(int argc, char * argv[]){

    int i;

    int a = 9001;
    int b = 11;
    int c = 42;
    int* p;
    p = &b;

   /* for(i = -10; i < 10; i++){

        printf("%d: %d %d\n", i, *(p+1), p[i]);

    }
    */
   // f(a, b, c); //takes a copy of the argument, x will get a copy of 9001, y will get a copy of 11, z will get a copy of 42

    int numbers[10] = {1, 2, 4, 5, 6, 7, 8, 9, 0}; //[10] - declarator, not a general dereference, its a modifier, asking for 10 integers in a row
    printf("%p\n", numbers); //identifer, evaluates as the first item in memory

}


void f(int x, int y, int z){

    int* p;
    p = &y;

    int i;
    printf("The loop\n");
    for(i = -1; i < 3; i++){
        
        printf("%d\n", p[i]);
    }

    printf("The value of x is %d\n", p[-1]);
    printf("The value of y is %d\n", p[0]);
    printf("The value of z is %d\n", p[1]);

    //[] operator - memory needs to be continguous
    //arrays are simply a way to declare a continguous area of memory, right next to each other, no jumps

}