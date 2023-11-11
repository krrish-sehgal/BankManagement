#pragma once
#include<stdio.h>
#include "../CustomerStructs/s1_Customer.h"


void ContactInfo(struct Customer* customer) {
    printf("Address: %s\n", customer->address);
    printf("MobileNo: %s\n", customer->contactInfo);

    printf("Change:\n");
    printf("1) Mobile\n");
    printf("2) Address\n");

    int choice;
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    
    switch (choice) {
        case 1:
            printf("Enter the new mobile number: ");
            scanf("%s", customer->contactInfo);
            printf("Mobile number updated to %s.\n", customer->contactInfo);
            break;
        case 2:
            printf("Enter the new address: ");
            scanf("%s", customer->address);
            printf("Address updated to %s.\n", customer->address);
            break;
        default:
            printf("Invalid choice. No changes made.\n");
            break;
    }
}