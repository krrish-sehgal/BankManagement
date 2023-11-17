#pragma once
#include <stdio.h>
#include "Date.h"
#include "Time.h"
#include "../CustomerStructs/s1_Customer.h"

void withdraw(struct Customer *customer , double amt){
    int choice;
    do{
    printf("1.Internet banking\n2.Credit card\n3.Exit\nEnter your choice : ");
    scanf("%d",&choice);
    if(choice==1){

        if(customer->accDet.minimumBalance < customer->accDet.accountBalance-amt){
            customer->accDet.accountBalance -= amt;
            printf("%lf is debited from account %d\n", amt , customer->accDet.accountNumber);
            customer->accDet.transHis.transactionDate[customer->accDet.transHis.custIdx] = getCurrentDate();
            customer->accDet.transHis.transactionTime[customer->accDet.transHis.custIdx] = getCurrentTime();
            customer->accDet.transHis.transactions[customer->accDet.transHis.custIdx++] = -amt;
            printf("Your current balance is = %f\n",customer->accDet.accountBalance);
        }else{
            printf("Not enough balance in your account\n");
            printf("Minimum Balance %f",customer->accDet.minimumBalance);
            printf("Current Balance %f",customer->accDet.accountBalance);
        }
        break;
    }else if(choice ==2){
        if(customer->creditCard.isActive){
            if(amt < customer->creditCard.currentBalance && amt < customer->creditCard.creditLimit){
                printf("%f is debited from your credit card \n", amt);
                customer->creditCard.currentBalance -= amt;
                break;
            }else{
                printf("\nThe credit card either does not have enough balance or amount exceeds credit limit\n ");
            }
        }else{
            printf("\nEither the credit card is not issued or is not active for this account\n");
        }
    }else if(choice ==3){
        break;
    }
    }while(1);

}