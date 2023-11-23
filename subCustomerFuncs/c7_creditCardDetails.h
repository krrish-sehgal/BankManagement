#pragma once
#include <stdio.h>
#include "../CustomerStructs/s1_Customer.h"
#include "c7_payBill.h"

void CreditCardDetails(struct Customer * customer){
    int choice;
    do {
        printf("\nCredit Card Information Menu:\n");
        printf("1. Display Active Status\n");
        printf("2. Display Card Number\n");
        printf("3. Display Card Holder Name\n");
        printf("4. Display Expiration Date\n");
        printf("5. Display Issuer\n");
        printf("6. Display Credit Limit\n");
        printf("7. Display Current Balance\n");
        printf("8. Display CVV\n");
        printf("9. Pay bill\n");
        printf("10. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
            if (customer->creditCard.isActive == 1) {
                printf("Active Status: Active\n");
            } else {
                printf("Active Status: Not Active\n");
            }
        break;
            case 2:
                printf("Card Number: %s\n", customer->creditCard.cardNumber);
                break;
            case 3:
                printf("Card Holder Name: %s\n", customer->creditCard.cardHolderName);
                break;
            case 4:
                printf("Expiration Date: %s\n", customer->creditCard.expirationDate);
                break;
            case 5:
                printf("Issuer: %s\n", customer->creditCard.issuer);
                break;
            case 6:
                printf("Credit Limit: Rs%f\n", customer->creditCard.creditLimit);
                break;
            case 7:
                printf("Current Balance: Rs%f\n", customer->creditCard.currentBalance);
                break;
            case 8:
                printf("CVV: %s\n", customer->creditCard.cvv);
                break;
            case 9: 
                if(customer->creditCard.creditLimit>customer->creditCard.currentBalance){
                    printf("Bill due: %f",customer->creditCard.creditLimit-customer->creditCard.currentBalance);
                    payBill(customer);
                }else{
                    printf("\nNO dues\n");
                }
            case 10:
                printf("Exiting the menu. Thank you!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 10);

}
