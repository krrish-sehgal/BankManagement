#pragma once
#include "../CustomerStructs/s1_Customer.h"
#include "stdio.h"

// struct accountDetails{
//     int accountNumber;
//     char accountType[100];
//     char accountTitle[100];
//     double accountBalance;
//     int accountStatus; // Use 0 for active, 1 for closed, etc.
//     double interestRate;
//     double minimumBalance;
//     struct history transHis;
// };
// struct Customer{
//     //to be inputted
//     char fullName[100];              // Full legal name
//     char dateOfBirth[12];           // Date of birth (e.g., "YYYY-MM-DD")
//     char contactInfo[100];           // Contact information (address, phone number, email)
//     char citizenshipStatus[50];     // Citizenship status
//     char governmentID[50];          //Adhar
//     struct accountDetails accDet;        // allows us to just create a customer object and then access this c.a.member of accDets.
//     struct CreditCard creditCard;
// };

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
        printf("1.Change the account Type\n");
        printf("1.Change the account Status\n");
        printf("1.Update the account interestRate\n");
        printf("1.Update the account  transaction history\n");
        printf("1.Change the account History\n");
        printf("1.Change the account ContactInfo\n");
        printf("1.Change the dateOfBirth\n");
        printf("1.Change the account Account owner's name\n");
        printf("1.Change the account govtID details\n");
        printf("1.Change the account minimum Balance\n");
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

                
        }



        
    }

}   