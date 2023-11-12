#pragma once
#include <stdio.h>
#include "../CustomerStructs/s1_Customer.h"
// #include "../subCustomerFuncs/c9_isResolved.h"
int checkEqualgets(char*accNum, char *searchNo){
    int i =0;
    if(searchNo ==NULL){
        return 0;
    }
    if(strlen(accNum)!=strlen(searchNo)-1){
        return 0;
    }
    for(int i=0;i<strlen(accNum);i++){
        if(accNum[i]!=searchNo[i]){ 
            return 0;
        }
    }
    return 1;
}

void solveDispute(struct Customer*customer){
    char solution[1000];

    char searchAccNo[1000];
    FILE*DisputesfilePtr = fopen("../subCustomerFuncs/Disputes.txt","r");
    char convAccnum[15];

    sprintf(convAccnum,"%d",customer->accDet.accountNumber);

    while(checkEqualgets(convAccnum,searchAccNo)!=1){                    
        fgets(searchAccNo,1000,DisputesfilePtr);
    };
    char reachMssgEnd[1000];
    //prints the query of the customer 
    while(reachMssgEnd[0] != '#' && reachMssgEnd[1] !='*'){
        fgets(reachMssgEnd,1000,DisputesfilePtr);
        if(reachMssgEnd[0] != '#' && reachMssgEnd[1] !='*') {
            printf("%s",reachMssgEnd);
        }
    }

    fclose(DisputesfilePtr);
    printf("Enter the solution to this customer's query\n");
    //employee writes a solution to the customer's query
    FILE*solutionFilePtr = fopen("../subCustomerFuncs/Solution.txt","a");
    fprintf(solutionFilePtr,"%d\n",customer->accDet.accountNumber);
    // gets(solution);
    scanf("%s",solution);
    fprintf(solutionFilePtr,"%s\n#*\n",solution);

    fclose(solutionFilePtr);
    customer->resolved =1;
    customer->query=0;

}

