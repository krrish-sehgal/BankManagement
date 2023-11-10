
#pragma once
#include <stdio.h>
#include "../CustomerStructs/s1_Customer.h"


void BlockCards(struct Customer* customer){
    int choice;
    char * checkCardNo , *checkExpiryDate;
    
    printf("Enter the card number");
    scanf("%s",&checkCardNo);
    printf("enter the expiry date in DD/MM/YYYY" , &checkExpiryDate);
    if(customer ->creditCard.cardNumber == checkCardNo && customer ->creditCard.expirationDate == checkExpiryDate){
        printf("do you want to block it? 1)yes\n2)No");
        scanf("%d",&choice);
        if(choice){
            customer->creditCard.isActive = 0;
        }else{
            return;
        }
    }else{
        printf("invalid info , card not found");
    }
}       
