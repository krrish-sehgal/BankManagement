#pragma once
#include<stdio.h>
#include "../CustomerStructs/s1_Customer.h"

  void changeInterestRate(struct Customer *customer) {
    char response;
    printf("Do you want to change the interest rate for account %d? (y/n): ", customer->accDet.accountNumber);
    scanf(" %c", &response);

    if (response != 'y' && response != 'Y') {
        printf("Interest rate unchanged.\n");
        
    }

 else if( response == 'y' && response == 'Y') { 
printf("Enter the new interest rate for account %d: ", customer->accDet.accountNumber);


scanf("%lf", &customer->accDet.interestRate);


printf("Interest rate for account %d updated to %.2f%%.\n", customer->accDet.accountNumber, customer->accDet.interestRate);}

else{
    printf("Error: Invalid choice. Please select a valid option.\n");
}
}