#include <stdio.h>
#include <math.h>

double square_root(double number);


int main(int argc, char * argv[]){

    double x = 7.0;


    printf("The square root of %f is %.20f\n", x, square_root(x)); //using the function we wrote
    printf("The square root of %f is %.20f\n", x, sqrt(x));


}

double square_root(double number){


    double guess = number / 2;
    double companion_number;

    for(int i = 0; i < 100; i++){
    companion_number = number / guess;
    guess = (guess + companion_number) / 2;

    }
    return guess;

}