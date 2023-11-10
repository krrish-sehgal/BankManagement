#pragma once
#include<stdio.h>
#include "../CustomerStructs/s1_Customer.h"
#include "../subCustomerFuncs/c6_transactionHist.h"


char * transactionTime[100];
char * transactionDate[100];
int transactions[100];
int custIdx;  

void updateTransac(struct Customer* customer){
    transactionHistory(customer);
    printf("Which transaction would like to modify\n");

    //incomplete , cant think why employees would have this funciton.

}   

