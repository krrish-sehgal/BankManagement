#include<stdio.h>
#include <stdlib.h>
#include "c1_CustomerFunc.h"
#include "m1_ManagerFunc.h"
#include "e1_employeeFunc.h"

int main() {

    int userType;
    struct Customer*custArray= (struct Customer*)malloc(accNums * sizeof(struct Customer));

    do{
    printf("Welcome to the Banking System\n");
    printf("Are you a 1.Customer, 2.Manager, or 3.Employee ,0 exit.? (Enter 1, 2, 3 or 0): ");
    scanf("%d",&userType);
        if (userType == 1) {
            printf("You are a Customer.\n");
            CustomerFunc(custArray);
        } else if (userType == 2) {
            printf("You are a Manager.\n");
            // ManagerFunc();

        } else if (userType == 3) {
            printf("You are an Employee.\n");
            EmployeeFunc(custArray);
        } else if(userType !=0){
            printf("Invalid input. Please enter C, M, or E.\n");
        }
    }while(userType);

  return 0;
}