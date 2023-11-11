#pragma once
#include "../CustomerStructs/s1_Customer.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char* generateRandomCreditCardNumber() {
    static char cardNumber[20];  // 16 digits + 3 spaces + null terminator

    // Seed the random number generator with the current time
    srand(time(NULL));

    for (int i = 0; i < 16; i++) {
        if (i > 0 && i % 4 == 0) {
            cardNumber[i] = ' ';  // Insert a space at every 4 digits
        } else {
            cardNumber[i] = '0' + rand() % 10;  // Generate random digits
        }
    }

    cardNumber[16] = '\0';  // Null-terminate the string

    return cardNumber;
}
char* generateExpirationDates() {
    // Get the current time
    time_t currentTime = time(NULL);

    // Add 9 years (in seconds) to the current time
    time_t futureTime = currentTime + (9 * 365 * 24 * 60 * 60);

    // Convert the future time to a struct tm
    struct tm *futureDate = localtime(&futureTime);

    // Allocate memory for the date string (YYYY-MM-DD + '\0')
    char *dateString = (char *)malloc(11 * sizeof(char));

    // Format the date string
    strftime(dateString, 11, "%Y-%m-%d", futureDate);

    return dateString;
}
char* generateCvv() {
    char* numberStr = (char*)malloc(4);  // Room for 3 digits + null terminator
    if (numberStr != NULL) {
        int randomNum = 100 + rand() % 900;  // Generate a random number between 100 and 999
        sprintf(numberStr, "%d", randomNum);
    }
    return numberStr;
}
void CreditCardIssue(struct Customer* customer){
    int choice;

    printf("enter the issuer 1) master\n , 2) visa\n , 3) rupay , 4)Dont issue\n ");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            customer->creditCard.issuer = "MasterCard";
            break;
        case 2:
            customer->creditCard.issuer = "Visa";
            break;
        case 3:
            customer->creditCard.issuer = "Rupay";
            break;
        default: 
        printf("invalid\n");
        break;
    }
    if(choice!=4){ 
        customer->creditCard.isIssued =1;
        
        customer->creditCard.cardHolderName = (char*)malloc(50*sizeof(char));
        customer->creditCard.cardHolderName = customer->fullName;

        customer->creditCard.cardNumber = (char*)malloc(16*sizeof(char));
        customer->creditCard.cardNumber = generateRandomCreditCardNumber();

        customer->creditCard.currentBalance = 30000;
        customer->creditCard.creditLimit = 30000;

        customer->creditCard.expirationDate = (char*)malloc(100*sizeof(char));
        customer->creditCard.expirationDate = generateExpirationDates();

        customer->creditCard.cvv = generateCvv();
    }
}
