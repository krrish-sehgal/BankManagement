#pragma once
#include<stdio.h>
#include "../CustomerStructs/s1_Customer.h"

void ownersName(struct Customer*customer){
    printf("enter the new Account holder's name");
    scanf("%s",customer->fullName);
}
