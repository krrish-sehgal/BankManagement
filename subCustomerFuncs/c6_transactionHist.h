#pragma once
#include "../CustomerStructs/s1_Customer.h"
#include <stdio.h>

void transactionHistory(struct Customer*customer){
    printf("+------------+----------+-------------+\n");
    printf("|    Date    |   Time   |   Amount    |\n");
    printf("+------------+----------+-------------+\n");

    for (int i = 0; i < customer->accDet.transHis.custIdx; i++) {
        printf("| %-10s | %-8s | Rs%11d  |\n", customer->accDet.transHis.transactionDate[i], customer->accDet.transHis.transactionTime[i], customer->accDet.transHis.transactions[i]);
        printf("+------------+----------+-------------+\n");
    }
} 