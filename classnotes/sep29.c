#include <stdio.h>


int main(int argc, char * argv[]){

    return 0;

}


//a function call can be replaced by the value it returns
int some_function(void){

    char grade;
    printf("Please enter the letter grade that you made on the last quiz:");
    scanf("%c", &grade);

    if(grade == 'A'){

        printf("You win a prize!\n");

    }
    else{

        if(grade == 'B'){
            printf("Better luck next time\n");

        }
        else{

            if(grade == 'C'){

                printf("Are we for real?\n");

            }
            else{
                if(grade == 'D'){
                    printf("At least you didn't fail\n");

                }
                else{
                    printf("Have you tried majoring in business?\n");

                }

            }

        }

    }


}