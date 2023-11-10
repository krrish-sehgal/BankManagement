#pragma once
#include<stdio.h>
#include "../CustomerStructs/s1_Customer.h"

void changeType(struct Customer * customer){
    //ask do you want to change , if not return as in status
    printf("enter the new interstRate to be put on the account %d",customer->accDet.accountNumber); // change it to 1,2,3 options like savings vageh 
    scanf("%s",customer->accDet.accountType );
}   
