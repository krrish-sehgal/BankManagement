#pragma once
#include "../CustomerStructs/s1_Customer.h"
#include "string.h"
#include <stdio.h>

void raiseDispute(struct Customer*customer){
    char dispute[1000];
    printf("Enter your Query");
    // gets(dispute);
    scanf("%s",dispute);
    FILE* filePtr = fopen("../subCustomerFuncs/Disputes.txt","a+");

    fprintf(filePtr , "%d\nAccount Holder's name-> %s\n",customer->accDet.accountNumber,customer->accDet.accountTitle);
    fprintf(filePtr, "%s\n#*\n",dispute);

    fclose(filePtr);
    customer->query =1;

}