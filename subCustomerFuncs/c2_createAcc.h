#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include "../CustomerStructs/s1_Customer.h"


int randomAccNo() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 100,000,000 and 999,999,999
    int randomNum = rand() % 900000000 + 100000000;

    return randomNum;   
}
// creates an object , and takes the info for the customer account creation 

void createAccount(struct Customer *customer) {

    char type[100];
    printf("Creating a new customer account\n");
    printf("enter the account type\n");
    scanf("%s",type);
    
    printf("Full Name: ");
    scanf(" %s\n", customer->fullName);
    
    printf("Date of Birth (YYYY-MM-DD): ");
    scanf("%s\n", customer->dateOfBirth);
    
    printf("Contact Information:\n");
    printf("Address: ");
    gets(customer->address);

    printf("Phone: ");
    gets(customer->contactInfo);

    printf("Email: ");
    gets(customer->email);

    
    
    printf("Citizenship Status: ");
    scanf(" %s\n", customer->citizenshipStatus);
    
    printf("Government-issued ID (e.g., Driver's License): ");
    scanf(" %s\n", customer->governmentID);
    printf("account is created\n\n");


    // //for account details
    customer->accDet.accountNumber = randomAccNo();
    printf("x-------x--------x\nyour account number is generated and is %d\nx-------x--------x\n" , customer->accDet.accountNumber);
    customer->accDet.accountBalance = 0;
    customer->accDet.accountStatus = 1;
    customer->accDet.accountTitle =customer->fullName;
    customer->accDet.accountType =type;

    // //for transaction history
    customer->accDet.transHis.custIdx = 0;

    // //for Credit Card
    customer->creditCard.isIssued =0;
    customer->creditCard.isActive =0;

}
