#pragma once
#include<stdio.h>
#include "../CustomerStructs/s1_Customer.h"

void DateOfBirth(struct Customer *customer){
    printf("Enter the New Date of birth(format: YYYY-MM-DD):");
    scanf("%s",customer->dateOfBirth);
    printf("Date of Birth updated to: %s\n", customer->dateOfBirth);
}
