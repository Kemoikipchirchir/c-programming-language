Author=Edwin kipchirchir
Date =19/06/2024
Description= A program to calculate simple intetest
//Simple interest calculation
#include <stdio.h>
int main() {
 float principal,time,rate,simple_interest;

    printf("please enter the principal amount:");
    scanf("%f",&principal);
    
    printf("please enter the rate: ");
    scanf("%f", &rate);
     
    printf("please enter time(in years) \n");
    scanf("%f",&time);
    
    simple_interest=(principal*rate*time)/100;
    
    printf("simple_interest=%f\n",simple_interest);
    

    return 0;
}
