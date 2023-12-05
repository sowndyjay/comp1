#include <stdio.h>


int main(int argc, char * argv[]){

   /* int x;
    printf("Please enter a value for the variable x: ");
    scanf("%d", &x);  //since scanf isn't reading from a variable that it "owns", you need to give it the address by putting &x
    printf("%d", x);
    return 0;

    */

    char answer;
    printf("Say yes or no:");
    scanf("%c", &answer);
    printf("%c", answer);
   
   
    return 0;

  

}

