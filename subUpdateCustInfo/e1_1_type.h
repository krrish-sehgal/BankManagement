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

    switch (choice) {
        case 1:
            printf(customer->accDet.accountType, sizeof(customer->accDet.accountType), "Current Account");
            break;
        case 2:
            printf(customer->accDet.accountType, sizeof(customer->accDet.accountType), "Savings Account");
            break;
        // Add more cases for additional options

        default:
            printf(stderr, "Error: Invalid choice. Please select a valid option.\n");
            // Handle error as needed
            break;
    }
}