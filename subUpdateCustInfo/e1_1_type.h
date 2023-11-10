#pragma once
#include<stdio.h>
#include "../CustomerStructs/s1_Customer.h"

void changeType(struct Customer *customer) {
    printf("Select the account type you want to modify to:\n");
    printf("1. Current Account\n");
    printf("2. Savings Account\n");
    // Add more options as needed

    int choice;
    printf("Enter your choice (1, 2): ");
    scanf("%d",&choice);

    switch (choice) {
        case 1:
            customer->accDet.accountType="Current Account";
            break;
        case 2:
            customer->accDet.accountType="savings Account";
            break;
        default:
            printf("Error: Invalid choice. Please select a valid option.\n");
           
            break;
    }
}