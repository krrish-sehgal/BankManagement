#pragma once
#include<stdio.h>
#include "../subCustomerFuncs/c2_createAcc.h"
#include "../subCustomerFuncs/c3_displayAccInfo.h"
#include "../subCustomerFuncs/c4_deposit.h"
#include "../subCustomerFuncs/c5_withdraw.h"
#include "../subCustomerFuncs/c6_transactionHist.h"
#include "../subCustomerFuncs/c7_creditCard.h"
#include "../subCustomerFuncs/c8_raiseDispute.h"
#include "../subCustomerFuncs/c9_isResolved.h"
#include "../subCustomerFuncs/c1_features.h"


void custFeatures(struct Customer*customer){
    int choice2;
    double amt; 
do {
                printf("\n\nAccount Management System Menu:\n");
                printf("0. Exit\n");
                printf("1. Display Account Information\n");
                printf("2. Deposit\n");
                printf("3. Withdraw\n");
                printf("4. Pass Book\n");
                printf("5. CreditCard\n");
                printf("6. Raise a Dispute\n");
                printf("7. Check if Query Resolved?\n");
                

                printf("Enter your choice: ");
                scanf("%d", &choice2);

                switch (choice2) {
                    case 1:
                        displayAccInfo(customer);
                        break;
                    case 2:
                        printf("Enter amount to deposit: ");
                        scanf("%lf", &amt);
                        deposit(customer, amt);
                        break;
                    case 3:
                        printf("Enter amount to withdraw: ");
                        scanf("%lf", &amt);
                        withdraw(customer, amt);
                        break;
                    case 4:
                        transactionHistory(customer);
                        break;
                    case 5:
                        CreditCard(customer);
                        break;
                    case 6:
                        if(customer->query==0){
                            raiseDispute(customer);
                        }else{
                            printf("there's already a query pending to be resolved");
                        }
                        break;
                    case 7:
                        if(customer->resolved){
                            isQueryResolved(customer);
                        }else printf("Not yet resolved");
                        break;
                    case 0:
                        printf("Exiting the program. Thank you!\n");
                        break;
                    default:
                        printf("Invalid choice. Please try again.\n");
                }
            } while (choice2);
}