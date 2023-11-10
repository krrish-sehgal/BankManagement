#pragma once
#include<stdio.h>
#include "../CustomerStructs/s1_Customer.h"

void changeType(struct Customer * customer){
    printf("enter the Type you want modify the account to"); // change it to 1,2,3 options like savings vageh 
    scanf("%s",customer->accDet.accountType );
}   
