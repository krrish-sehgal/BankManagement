#pragma once
#include "../subCustomerFuncs/c2_createAcc.h"
#include "../subCustomerFuncs/c3_displayAccInfo.h"
#include "../subCustomerFuncs/c4_deposit.h"
#include "../subCustomerFuncs/c5_withdraw.h"
#include "../subCustomerFuncs/c6_transactionHist.h"
#include "../subCustomerFuncs/c7_creditCard.h"
#include "../subCustomerFuncs/c8_raiseDispute.h"
#include "../subCustomerFuncs/c9_isResolved.h"
#include "../subCustomerFuncs/c1_features.h"


#define accNums 100

int accNumsIdx =0;
int accNo ;


void CustomerFunc(struct Customer*custArray){
    int choice1, flag = 1;
    float amt; 
    char checkEmail[50] , checkPass[20];
    do{
    printf("\n\nCustomer Panel\n");
    printf("1. Login\n");
    printf("2. Sign Up\n");
    printf("Enter your choice (1 or 2 or 0 to exit): ");
    scanf("%d", &choice1);

    if(choice1 == 1) {
        printf("Enter your email(smallCases): ");
        scanf("%s",checkEmail);
        printf("Enter your password ");
        scanf("%s",checkPass);

        for(int i=0;i<=accNumsIdx;i++){
            if(strcmp(custArray[i].email,checkEmail)==0 && strcmp(custArray[i].password ,checkPass)==0){
                custFeatures(&custArray[i]);
                break;
            }else{
                flag = 0;
            }   
        }
        if(flag==0){
        printf("These Login Details do not exsist\n");
        }
    }else if(choice1 == 2) {
        createAccount(&custArray[accNumsIdx],custArray,accNumsIdx);
        accNumsIdx++;
    }else{
        printf("Invalid choice. Please enter 1 for existing user or 2 for new user.\n");
    }
    }while(choice1);
}