#include <stdio.h>
 int main () {
  int age ;
  float income ;
  
  // Ask the user for their age and income
  printf("Enter your age: ");
  scanf("%d", &age);
  
  printf("Enter your annual income: ");
  scanf("%f", &income);
  
  //Check whether they qualify for  a loan
  if (age >= 21, income >= 21000) {
    printf("Congratulations you qualify for a loan.\n");
    }
    else { 
    printf("Unfortunately, we are unable to offer you a loan at this time.");
    }
  return 0;
  }
    