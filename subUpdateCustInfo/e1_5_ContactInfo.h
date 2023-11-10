#pragma once
#include<stdio.h>
#include "../CustomerStructs/s1_Customer.h"

void contactInfo(struct Customer*customer){
    printf("Address: %s\n", customer->address);
    printf("MobileNo: %s", customer->contactInfo);

    printf("Change 1)mobile , 2) address");
    //take input

}