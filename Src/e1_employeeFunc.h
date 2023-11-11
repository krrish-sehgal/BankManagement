#pragma once
#include <stdio.h>
#include "c1_CustomerFunc.h"
#include "../CustomerStructs/s1_Customer.h"
#include "../subCustomerFuncs/c3_displayAccInfo.h"
#include "../subEmployeeFuncs/e1_updateCustAcc.h"
#include "../subEmployeeFuncs/e2_blockCards.h"
#include "../subEmployeeFuncs/e3_removeAcc.h"


void features(struct Customer* customer, struct Customer* custArray){
    int choice;
    do{
    printf("Features\n");
    printf("1. Update Member Account Details\n");
    printf("2. Display Account info\n");
    printf("3. block cards\n");
    printf("4. remove customer\n");
    printf("5. raise a dispute\n");
    printf("6. Exit\n");


    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            updateCustAccInfo(customer);          
            break;
        case 2:
            displayAccInfo(customer);           //use subfunction of custiomer(fiel c3)
            break;
        case 3:
            BlockCards(customer);
            break;
        case 4:
            removeAccount(customer ,custArray);
            return;
        case 5:
            // rasieAnddispute(&customer);           //use file handling
        default:
            printf("invalid choice");
            break;
    }
    }while(choice !=6);
}
void EmployeeFunc(struct Customer* custArray) {
    int choice, choice2 ,check =1;
    do {
        printf("Employee Panel\n");
        printf("1. Member Account Access\n");
        printf("2. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the account number to access: ");
                scanf("%d", &accNo);
                for(int i=0;i<=accNumsIdx;i++){
                    if(accNum[i]==accNo){
                        features(&custArray[i] , custArray);
                    }else {
                        check =0;
                    }
                }
                if(check ==0){
                    printf("Account not found.\n");
                }
                break;
            case 2:
                printf("Exiting the employee panel.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 2);
}
