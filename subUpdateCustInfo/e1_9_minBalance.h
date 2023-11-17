#pragma once
#include<stdio.h>
#include "../CustomerStructs/s1_Customer.h"

void minbalance(struct Customer *customer){
    printf("Enter the minimum balance , the account %d can have\n",customer->accDet.accountNumber);
    scanf("%lf",&customer->accDet.minimumBalance);
    printf("Minimum balance updated\n");
}
