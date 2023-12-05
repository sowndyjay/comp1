#include <stdio.h>


int main(int argc, char * argv[]){

    towers(1, 1, 3, 2);
    return 0;

}








void towers(int number_of_discs, int from, int to, int spare){

    if(number_of_discs > 0){

        towers(number_of_discs - 1, from, spare, to);
        printf("Move disc %d from peg &d to peg %d\n", number_of_discs, )

    }

}

//read notes on paper for number of moves it takes for this