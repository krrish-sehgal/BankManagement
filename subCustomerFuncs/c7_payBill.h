#pragma once
#include <stdio.h>
#include "../CustomerStructs/s1_Customer.h"

void payBill(struct Customer*customer){
    int choice;
    double amt;
    printf("1.Clear dues\n2.Exit\n");
    scanf("%d",&choice);

    if(choice==1){
        printf("enter the amount to deposit");
        scanf("%lf",&amt);
        customer->creditCard.currentBalance += amt;
        printf("Your new creditBalance is %f",customer->creditCard.currentBalance);
    }
    return;
}