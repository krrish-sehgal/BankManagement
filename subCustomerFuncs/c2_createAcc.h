#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include "../CustomerStructs/s1_Customer.h"
#include "../subUpdateCustInfo/e1_1_type.h"
// #include "../Src/c1_CustomerFunc.h"

int randomAccNo() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generate a random number between 100,000,000 and 999,999,999
    int randomNum = rand() % 900000000 + 100000000;

    return randomNum;   
}
// creates an object , and takes the info for the customer account creation 

void createAccount(struct Customer *customer ,struct Customer * custArray,int accNumsIdx) {

    char type[100];
    char checkEmail[50] , checkPass[20];
    int flag =1;

    printf("Creating a new customer account\n");

    printf("Email: (all smallCases) ");
    scanf("%s", checkEmail);
    // printf("%s\n",checkEmail);

    printf("Create your password for Internet banking ");
    scanf("%s",checkPass);
    // printf("%s\n",checkPass);

    for(int i=0;i<=accNumsIdx;i++){
        if(strcmp(custArray[i].email,checkEmail)==0){
            flag = 0;
            break;
        }
    }
    if(flag){
    strcpy(customer->email,checkEmail);
    // printf("%s\n",customer->email);


    strcpy(customer->password,checkPass);
    // printf("%s\n",customer->password);


    printf("enter the account type ");
    changeType(customer);
    
    printf("Full Name: ");
    scanf("%s", customer->fullName);
    
    printf("Date of Birth (YYYY-MM-DD): ");
    scanf("%s", customer->dateOfBirth);
    
    printf("Contact Information:\n");
    printf("Address: ");
    scanf("%s", customer->address);
    // fgets(customer->address, sizeof(customer->address), stdin);
    //gets(customer->address);

    printf("Phone: ");
    scanf("%s", customer->contactInfo);
    // fgets(customer->contactInfo,sizeof(customer->contactInfo),stdin)

    printf("Citizenship India or NRI : ");
    scanf(" %s", customer->citizenshipStatus);
    
    printf("Government-issued ID (e.g., Driver's License): ");
    scanf(" %s", customer->governmentID);

    printf("account is created\n\n");

    printf("x-------x--------x\nyour account number is generated and is %d\nx-------x--------x\n" , customer->accDet.accountNumber);
    // fgets(customer->email,sizeof(customer->email),stdin);

    //for account details
    customer->accDet.accountNumber = randomAccNo();
    customer->accDet.minimumBalance = 1000;
    customer->accDet.accountBalance = 0;
    customer->accDet.accountStatus = 1;
    customer->accDet.accountTitle =customer->fullName;

    //for transaction history
    customer->accDet.transHis.custIdx = 0;

    //for Credit Card
    customer->creditCard.isIssued =0;
    customer->creditCard.isActive =0;

    //for query
    customer->resolved =0;
    customer->query = 0;
    }else{
        printf("Email Account already exsists\n");
        return;
    }

}
