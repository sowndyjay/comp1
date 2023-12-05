#include <stdio.h>

//Precondition: None
//Post condition: User has convereted some number of feet and inches to meters and cm
void convert_length_to_metric(void);

//Precondition: None
//Postcondition: The variables indicated by the addresses in pFeet and pInches have been given positive values by the user
void input_length_to_metric(int* pMeters, double* p_cm);

//Precondition: feet and inches are non negative values
//Postcondition: Variables indiccated by the addresses in pMeters and p_cm have values that are equivalent in length to the given values in feet and inches
void valculate_length_to_metric(int feet, double inches, int* pMeters, double* p_cm);

//Precondition: the length by the pair of feet and in are the same length as the ones given by m and cm
void display_length_to_metric(int feet, double inches, int meters, double cm);
int main(int argc, char * argv[]){




}



void input_length_to_metric(int *pFeet, double* pInches){

    *pFeet = 5;
    *pInches = 6.789;


}


void calc_length_to_metric(){




}
