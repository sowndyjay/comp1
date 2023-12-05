#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void conversion(void);
int keepGoing(void);

int main(int argc, char * argv[]){

    int x = -42;
    long int y = -42;
    double z = -42;


    printf("The absolute value of x is %d\n", abs(x)); //absolute value function for ints, returns ints
    printf("The absolute value of y is %d\n", labs(y)); //absolute value function for long ints, returns long ints
    printf("The absolute value of z is %f\n", fabs(z));  //absolute value function for doubles, returns doubles


    //stub - does something reasonable, does not have to compile the entire program, does a part of it

   


}

void conversion(void){

    printf("Hey I did this conversion");

}

int keepGoing(void){
    
    //ask
    //read the response
    //very it
    //return it

    return 0;    
    
}