//variables and Data Types
//preprocessor  directive  - scanf() , printf ()
#include <stdio.h>
int main () {
       //declaration and initialization 
       char a;
       char name [] =  {} ;   
       int age  ; 
       float salary ; 
       double budget ; 
       
       printf("Enter a character: ");
       scanf("%c" , &a);
       printf("The character is %c \n ", a);
        
       printf("Enter your name: ");
       scanf("%s", &name);
       printf("Your name is %s \n", name);
       
       printf("Enter your age: ");
       scanf("%d", &age);
       printf("Your age is %d \n", age);
       
       printf("Enter your salary: ");
       scanf("%.2f", &salary);
       printf("Your salary is %.2f \n", salary);
       
       printf("Enter your budget: ");
       scanf("%.4lf", &budget);
       printf("Your budget is %.4lf \n", budget);
       
        /*
        printf("The character is %c  \n" ,a);
        printf("Your name is %s \n" , name);
        printf("Your age is %d \n", age);
        printf("Your salary is %.2f \n" , salary);
        printf("Your budget is %.4lf \n", budget);
        */
        
       return 0 ;
}