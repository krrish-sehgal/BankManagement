#pragma once
#include "../CustomerStructs/s1_Customer.h"
#include "c7_creditCardIssue.h"
#include "c7_creditCardDetails.h"


#include <stdio.h>

void CreditCard(struct Customer * customer){
    int choice;
    if(!customer->creditCard.isIssued){
        printf("threre is no credit card for this account\n ");
        printf("Do you want to issue a creditCard 1.yes , 2.No\n");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                CreditCardIssue(customer);
                break;
            case 2:
                return;
        }
    }if(!customer->creditCard.isActive){
        printf("Credit is issued but it is not activated\n");
        printf("Would you like to activate you card:\n1.yes\n2.No\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                customer->creditCard.isActive = 1;
                printf("credit card activated");
                break;
            case 2:
                printf("exitied");
                return;
            default:
                printf("invalid");
                break;
        }
    }
    printf("\nDisplay Credit Card Details\n");
    CreditCardDetails(customer);
}       