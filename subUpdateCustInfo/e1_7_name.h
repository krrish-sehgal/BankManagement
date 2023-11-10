#pragma once
#include<stdio.h>
#include "../CustomerStructs/s1_Customer.h"

void ownersName(struct Customer*customer){
    printf("Enter the new Account holder's name :");
    scanf("%s",customer->fullName);
    printf("Account holder's name updated to: %s\n", customer->fullName);
}
