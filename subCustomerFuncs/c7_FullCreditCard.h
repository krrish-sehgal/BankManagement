#pragma once
#include "../CustomerStructs/s1_Customer.h"
#include <stdio.h>


void FullCreditCard(struct Customer *customer){
    printf("+-------------------------------------+\n");
    printf("|                                     |\n");
    printf("|              CREDIT CARD             |\n");
    printf("|                                     |\n");
    printf("|    %16s  %s      |\n", customer->creditCard.cardHolderName, customer->creditCard.expirationDate);
    printf("|    %-30s|\n", customer->creditCard.issuer);
    printf("|                                     |\n");
    printf("|   ------------------------------    |\n");
    printf("|   |           %16s|    |\n", customer->creditCard.cardNumber);
    printf("|   |                               |   |\n");
    printf("|   |      %10s            |   |\n", customer->creditCard.cvv);
    printf("|   |                               |   |\n");
    printf("|   ------------------------------    |\n");
    printf("|                                     |\n");
    printf("|    Credit Limit: $%10.2f   |\n", customer->creditCard.creditLimit);
    printf("|    Current Balance: $%10.2f  |\n", customer->creditCard.currentBalance);
    printf("+-------------------------------------+\n");
}
