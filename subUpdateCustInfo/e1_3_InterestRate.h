#pragma once
#include<stdio.h>
#include "../CustomerStructs/s1_Customer.h"

  void changeInterestRate(struct Customer *customer) {
    printf("Enter the new interest rate for account %d: ", customer->accDet.accountNumber);
    scanf("%lf", &customer->accDet.interestRate);
    printf("Interest rate for account %d updated to %.2f%%.\n", customer->accDet.accountNumber, customer->accDet.interestRate);
  }