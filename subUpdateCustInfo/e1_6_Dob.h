#pragma once
#include<stdio.h>
#include "../CustomerStructs/s1_Customer.h"

void DateOfBirth(struct Customer *customer){
    printf("Enter the new Dob");
    scanf("%s",customer->dateOfBirth);
}
