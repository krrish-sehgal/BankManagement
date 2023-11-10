#pragma once
#include "../CustomerStructs/s1_Customer.h"
#include "stdio.h"

void changeStatus(struct Customer * customer){
    int choice2;
    if(customer->accDet.accountStatus){
        printf("Account is already on\n ");
        printf("1 Do you want to disable it \n 2.Exit");
        scanf("%d",&choice2);
        if(choice2){
            customer->accDet.accountStatus =0;
        }else{
            return;
        }
    }else{
        printf("Account is disabled\n");
        printf("1.Enable the account?\n2.Exit");
        scanf("%d",&choice2);
        if(choice2){
            customer->accDet.accountStatus = 1;
        }else{
            return;
        }
    }
}
void updateCustAccInfo(struct Customer* customer){
    printf("Change Info for Customer Account: %d",customer->accDet.accountNumber);
    int choice ;
    do{
        printf("1.Update the account number\n");
        printf("2.Change the account Type\n");
        printf("3.Change the account Status\n");
        printf("4.Update the account interestRate\n");
        printf("5.Update the account  transaction history\n");
        printf("6.Change the account History\n");
        printf("7.Change the account ContactInfo\n");
        printf("8.Change the dateOfBirth\n");
        printf("9.Change the account Account owner's name\n");
        printf("10.Change the account govtID details\n");
        printf("11.Change the account minimum Balance\n");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("enter the new account number ");
                scanf("%d",&customer->accDet.accountNumber);
                break;
            case 2:
                printf("Change the account Type : ");
                changeType(customer);
                break;
            case 3:
                changeStatus(customer);
                break;
            case 4:
                changeInterestRate(customer);
                break;
            case 5:
                updateTransac(customer);
                break;
            case 6:
                AccountHist(customer);
                break;
            case 7:
                ContactInfo(customer);
                break;
            case 8:
                DateOfBirth(customer);
                break;
            case 9:
                ownersName(customer);
                break;
            case 10:
                updateGovtId(customer);
                break;
            case 11:
                minbalance(customer);
                break;
            default:
                printf("Invalid choice\n");
        }
    }while(choice);

}