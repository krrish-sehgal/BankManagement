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

    // Adding error handling for user input
    if (scanf("%d", &choice) != 1) {
        fprintf(stderr, "Error: Invalid input for account type selection.\n");
        // Handle error as needed
        return;
    }

    switch (choice) {
        case 1:
            snprintf(customer->accDet.accountType, sizeof(customer->accDet.accountType), "Current Account");
            break;
        case 2:
            snprintf(customer->accDet.accountType, sizeof(customer->accDet.accountType), "Savings Account");
            break;
        // Add more cases for additional options

        default:
            fprintf(stderr, "Error: Invalid choice. Please select a valid option.\n");
            // Handle error as needed
            break;
    }
}