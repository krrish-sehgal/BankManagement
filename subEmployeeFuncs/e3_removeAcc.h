#pragma once
#include <stdio.h>
#include "../Src/c1_CustomerFunc.h"
#include "../CustomerStructs/s1_Customer.h"

void removeAccount(struct Customer*customer , struct Customer* custArray){
    for(int i=0;i<=accNumsIdx;i++){
        if(custArray[i].accDet.accountNumber == customer->accDet.accountNumber){
            free(customer);
            accNumsIdx--;
            printf("Account is removed\n");
            return;
        }
    }
}

