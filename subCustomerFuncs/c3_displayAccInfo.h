
#pragma once
#include "../CustomerStructs/s1_Customer.h"

void displayAccInfo(struct Customer * customer){

    printf("Account Title: %s\n", customer->accDet.accountTitle);
    printf("Account Type : %s\n",customer->accDet.accountType);
    printf("\nAccount Number: %d\n",customer->accDet.accountNumber);
    printf("Account Balance: %.2f\n", customer->accDet.accountBalance);
    printf("Account minimum balance: %f\n",customer->accDet.minimumBalance);
    printf("Account Status: %s\n", customer->accDet.accountStatus ? "Active" : "Inactive");

    printf("\nImportant Acount holder details: \n");

    printf("\nCustomer Address : %s\n",customer->address);
    printf("customer Residenship : %s\n",customer->citizenshipStatus);
    printf("credit card status : %s\n",customer->creditCard.isActive?"Active":"Not ACTIVE");
};
