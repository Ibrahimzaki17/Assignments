#include <stdio.h>
  int main () {
    float principal, rate, simpleInterest ;
    int time;
    
    //Accept user inputs
    printf("Enter the principal amount: "); 
    scanf("%f", &principal);
    
    printf("Enter the time(in years): ");
    scanf("%d", &time);
    
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    
    //Calculate simple interest 
    simpleInterest = (principal * time * rate) / 100;
    
    //output the results 
    printf("The Simple Interest is: %.2f", simpleInterest);
  return 0;
  }