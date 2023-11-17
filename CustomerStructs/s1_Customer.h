# pragma once

struct CreditCard {
    int isActive;
    int isIssued;

    char *cardNumber; // Credit card number (including hyphens or spaces)        16digits + 3 spaces
    char* cardHolderName; 
    char *expirationDate; // Expiration date (in "DD/MM/YYYY" format)
    char *issuer; // Credit card issuer (e.g., Visa, MasterCard)

    double creditLimit; // Credit limit for the card
    double currentBalance; 
    char * cvv; 
};
struct history{
    char *transactionTime[100];
    char *transactionDate[100];
    double transactions[100];
    int custIdx;            
};
struct accountDetails{
    int accountNumber;
    char* accountType;
    char* accountTitle;
    double accountBalance;
    int accountStatus; // Use 0 for active, 1 for closed, etc.
    double interestRate;
    double minimumBalance;
    struct history transHis;
};
struct Customer{
    //to be inputted
    char fullName[100];              // Full legal name
    char dateOfBirth[12];           // Date of birth (e.g., "YYYY-MM-DD")
    char contactInfo[100];           // Contact information (address, phone number, email)
    char address[100];

    char email[50];
    char password[20];

    char citizenshipStatus[50];     // Citizenship status
    char governmentID[50];          //Adhar
    struct accountDetails accDet;        // allows us to just create a customer object and then access this c.a.member of accDets.
    struct CreditCard creditCard;

    int query;
    int resolved;
};
