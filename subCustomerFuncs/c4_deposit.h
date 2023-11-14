#pragma once
#include <stdio.h>
#include "Date.h"
#include "Time.h"
#include "../CustomerStructs/s1_Customer.h"

 void deposit(struct Customer* customer, double amt){
    customer->accDet.accountBalance += amt;
    printf("Amount of %frupees is deposited\n",amt);
    customer->accDet.transHis.transactionDate[customer->accDet.transHis.custIdx] = getCurrentDate();
    customer->accDet.transHis.transactionTime[customer->accDet.transHis.custIdx] = getCurrentTime();
    customer->accDet.transHis.transactions[customer->accDet.transHis.custIdx++] = amt;
    printf("Your current balance is = %f\n",customer->accDet.accountBalance);
 }
