#include<stdio.h>

int main()
{   
    int bookID, dueDate, returnDate, daysOverdue ;
    float fineRate, fineAmount;
    
    //User inputs
    printf("Enter the Book ID: ");
    scanf("%d", &bookID);
    
    printf("Enter the Due Date: ");
    scanf("%d", &dueDate);
    
    printf("Enter the Return Date: ");
    scanf("%d", &returnDate);
    
    //Calculate the Days over Due
    daysOverdue = returnDate - dueDate;
    printf("Days overdue is: %d\n",daysOverdue);
    
    if (daysOverdue <= 0) {
     fineRate=0.00;
     fineAmount=0.00;
    }
    else if (daysOverdue <=7) {
      fineRate=20;
      fineAmount = daysOverdue * 20;
    }
    else if (daysOverdue <=14) {
      fineRate=50;
      fineAmount = 7 * 20 + (daysOverdue-7) * 50;
    }
    else {
      fineRate = 100;
      fineAmount = 7 * 20 + 7 * 50 + (daysOverdue-14) * 100;
    }
    
    //Display the results 
    printf("•••FINE CALCULATIONS•••\n");
    printf("Book Id: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
    printf("Finerate: %.2f\n", fineRate);
    printf("Fine Amount: %.2f\n", fineAmount);
    
    return 0;
}