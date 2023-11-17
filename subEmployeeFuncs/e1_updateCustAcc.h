#pragma once
#include "../CustomerStructs/s1_Customer.h"
#include "../subUpdateCustInfo/e1_1_type.h"
#include "../subUpdateCustInfo/e1_2_Status.h"
#include "../subUpdateCustInfo/e1_3_InterestRate.h"
#include "../subUpdateCustInfo/e1_5_ContactInfo.h"
#include "../subUpdateCustInfo/e1_6_Dob.h"
#include "../subUpdateCustInfo/e1_7_name.h"
#include "../subUpdateCustInfo/e1_8_govtID.h"
#include "../subUpdateCustInfo/e1_9_minBalance.h"

#include <string.h>
#include "stdio.h"

void updateCustAccInfo(struct Customer* customer){
    printf("Change Info for Customer Account: %d",customer->accDet.accountNumber);
    int choice ;
    do{
        printf("1.Update the account number\n");
        printf("2.Change the account Type\n");
        printf("3.Change the account Status\n");
        printf("4.Update the account interestRate\n");
        printf("5.Change the account ContactInfo/address\n");
        printf("6.Change the dateOfBirth\n");
        printf("7.Change the account Account owner's name\n");
        printf("8.Change the account govtID details\n");
        printf("9.Change the account minimum Balance\n");
        printf("10.To exit\n");

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
                ContactInfo(customer);
                break;
            case 6:
                DateOfBirth(customer);
                break;
            case 7:
                ownersName(customer);
                break;
            case 8:
                updateGovtId(customer);
                break;
            case 9:
                minbalance(customer);
                break;
            default:
                printf("Invalid choice\n");
        }
    }while(choice!=10);

}