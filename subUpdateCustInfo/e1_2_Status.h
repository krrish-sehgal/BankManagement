#pragma once
#include<stdio.h>
#include "../CustomerStructs/s1_Customer.h"


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