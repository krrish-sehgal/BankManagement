#pragma once
#include <stdio.h>
#include "Date.h"
#include "Time.h"
#include "../CustomerStructs/s1_Customer.h"


void withdraw(struct Customer *customer , int amt){
    customer->accDet.accountBalance -= amt;
    printf("%d is debited from account %d\n", amt , customer->accDet.accountNumber);
    customer->accDet.transHis.transactionDate[customer->accDet.transHis.custIdx] = getCurrentDate();
    customer->accDet.transHis.transactionTime[customer->accDet.transHis.custIdx] = getCurrentTime();
    customer->accDet.transHis.transactions[customer->accDet.transHis.custIdx++] = -amt;
}