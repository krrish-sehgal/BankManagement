
#include "../subCustomerFuncs/c2_createAcc.h"
#include "../subCustomerFuncs/c3_displayAccInfo.h"
#include "../subCustomerFuncs/c4_deposit.h"
#include "../subCustomerFuncs/c5_withdraw.h"
#include "../subCustomerFuncs/c6_transactionHist.h"
#include "../subCustomerFuncs/c7_creditCard.h"


#define accNums 100

int accNum[accNums];
int accNumsIdx =0;

void CustomerFunc(struct Customer*custArray){

    int accNo ;
    int choice1,choice2 , check = 1;
    float amt; 
    do{
    printf("Are you an existing user or a new user?\n");
    printf("1. Existing User\n");
    printf("2. New User\n");
    printf("Enter your choice (1 or 2 or 0 to exit): ");
    scanf("%d", &choice1);

    if(choice1 == 1) {
        printf("enter your account no (-1 , if you dont have any)");
        scanf("%d",&accNo);
        for(int i=0;i<=accNumsIdx;i++){
        if(accNum[i]==accNo){
            do {
                printf("\nAccount Management System Menu:\n");
                printf("1. Display Account Information\n");
                printf("2. Deposit\n");
                printf("3. Withdraw\n");
                printf("4. TransactionHistory\n");
                printf("5. CreditCard\n");
                printf("6. DebitCard\n");
                printf("7. Cheques\n");
                printf("8. exit\n");

                printf("Enter your choice: ");
                scanf("%d", &choice2);

                switch (choice2) {
                    case 1:
                        displayAccInfo(&custArray[i]);
                        break;
                    case 2:
                        printf("Enter amount to deposit: ");
                        scanf("%f", &amt);
                        deposit(&custArray[i], amt);
                        break;
                    case 3:
                        printf("Enter amount to withdraw: ");
                        scanf("%f", &amt);
                        withdraw(&custArray[i], amt);
                        break;
                    case 4:
                        transactionHistory(&custArray[i]);
                        break;
                    case 5:
                        CreditCard(&custArray[i]);
                        break;
                    case 6:
                        // DebitCard(&custArray[i]);
                        break;
                    case 7:
                        // Cheques(&custArray[i]);
                        break;
                    case 8:
                        printf("Exiting the program. Thank you!\n");
                        break;
                    default:
                        printf("Invalid choice. Please try again.\n");
                }
            } while (choice2 != 8);
            break;
        }else{
            check = 0;
        }
        }
        if(check==0){
        printf("This Account Number does not exsists\n");
        }
    }else if(choice1 == 2) {
        createAccount(&custArray[accNumsIdx]);
        accNum[accNumsIdx] = custArray[accNumsIdx].accDet.accountNumber;
        accNumsIdx++;
    }else{
        printf("Invalid choice. Please enter 1 for existing user or 2 for new user.\n");
    }
    }while(choice1);
}