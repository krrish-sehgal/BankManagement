#include <stdio.h>


void EmployeeFunc(struct Customer* custArray) {
    int choice;
    int accountNumber, accountIdx;
    do {
        printf("Employee Panel\n");
        printf("1. Member Account Access\n");
        printf("2. Update Account Details\n");
        printf("3. Block Cards\n");
        printf("4. Transaction History\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the account number to access: ");
                scanf("%d", &accountNumber);
                accountIdx = findAccount(custArray, accountNumber); // Function to find the index of the account in custArray
                if (accountIdx != -1) {
                    // Access account with custArray[accountIdx]
                    // Perform actions on the account
                } else {
                    printf("Account not found.\n");
                }
                break;
            case 2:
                printf("Enter the account number to update details: ");
                scanf("%d", &accountNumber);
                accountIdx = findAccount(custArray, accountNumber); // Function to find the index of the account in custArray
                if (accountIdx != -1) {
                    // Update account details with custArray[accountIdx]
                    // Modify account information
                } else {
                    printf("Account not found.\n");
                }
                break;
            case 3:
                printf("Enter the account number to block: ");
                scanf("%d", &accountNumber);
                accountIdx = findAccount(custArray, accountNumber); // Function to find the index of the account in custArray
                if (accountIdx != -1) {
                    // Block cards associated with custArray[accountIdx]
                    // Modify account status or card status
                } else {
                    printf("Account not found.\n");
                }
                break;
            case 4:
                printf("Enter the account number for transaction history: ");
                scanf("%d", &accountNumber);
                accountIdx = findAccount(custArray, accountNumber); // Function to find the index of the account in custArray
                if (accountIdx != -1) {
                    transactionHistory(&custArray[accountIdx]); // Function to display transaction history
                } else {
                    printf("Account not found.\n");
                }
                break;
            case 5:
                printf("Exiting the employee panel.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);
}

// Function to find the index of the account in the custArray
int findAccount(struct Customer* custArray, int accountNumber) {
    for (int i = 0; i < accNums; i++) {
        if (custArray[i].accDet.accountNumber == accountNumber) {
            return i;
        }
    }
    return -1;
}

