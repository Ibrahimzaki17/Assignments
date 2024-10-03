#include <stdio.h>
#include <math.h>
  int main () {
   int time, n;
   float principal, rate, compoundInterest, amount;
      
   //Accept user input
   printf("Enter the principal: ");
   scanf("%f", &principal);
   
   printf("Enter the rate(in percentage): ");
   scanf("%f", &rate);
   
   printf("Enter the time(in years): ");
   scanf("%d", &time);
   
   printf("Enter the number of times Interest is compounded per year: ");
   scanf("%d", &n);
   
   //Convert the rate to decimal 
   rate = rate / 100;
   
   //Calculate using the compound interest formula 
   amount = principal * pow((1 + rate / n ),n * time);
   compoundInterest = amount - principal;
   
   printf("The compound interest is: %.2f\n", compoundInterest);
   printf("Total amount after %d years is %.2f", time, amount);
   return 0;
   }