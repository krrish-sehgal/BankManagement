#pragma once
#include<stdio.h>
#include "../CustomerStructs/s1_Customer.h"

void updateGovtId(struct Customer*customer){
    printf("Enter the new government ID (Aadhar): ");
    scanf("%s", customer->governmentID);

    printf("Government ID updated to: %s\n", customer->governmentID);
    
}
