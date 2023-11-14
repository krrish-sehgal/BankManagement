
#pragma once
#include "../CustomerStructs/s1_Customer.h"

void displayAccInfo(struct Customer * customer){

    printf("\nAccount Numeber: %d\n",customer->accDet.accountNumber);
    printf("Account Balance: %.2f\n", customer->accDet.accountBalance);
    printf("Account Status: %s\n", customer->accDet.accountStatus ? "Active" : "Inactive");
    printf("Account Title: %s\n", customer->accDet.accountTitle);
    printf("Account Type : %s\n",customer->accDet.accountType);

}