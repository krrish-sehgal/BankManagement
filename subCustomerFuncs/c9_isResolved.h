#pragma once
#include "../CustomerStructs/s1_Customer.h"
#include "string.h"
#include <stdio.h>
int checkEqual(char*accNum, char *searchNo){
    int i =0;
    if(searchNo ==NULL){
        return 0;
    }
    if(strlen(accNum)!=strlen(searchNo)){
        return 0;
    }
    for(int i=0;i<strlen(accNum);i++){
        if(accNum[i]!=searchNo[i]){ 
            return 0;
        }
    }
    return 1;
}
void findAccInFile(FILE* filePtr,struct Customer * customer){
    char searchAccNo[1000];
    char convAccnum[15];
    sprintf(convAccnum,"%d",customer->accDet.accountNumber);

    do{                    
        fscanf(filePtr,"%s",searchAccNo);

    }while(checkEqual(convAccnum,searchAccNo)!=1);

}
void isQueryResolved(struct Customer*customer){
    FILE*filePtr = fopen("../subCustomerFuncs/Solution.txt","r");
    findAccInFile(filePtr,customer);
    char reachMssgEnd[1000];
    while(reachMssgEnd[0] != '#' && reachMssgEnd[1] !='*'){
        fscanf(filePtr,"%s",reachMssgEnd);
        if(reachMssgEnd[0] != '#' && reachMssgEnd[1] !='*') {
            printf("%s",reachMssgEnd);
        }
    }

    fclose(filePtr);
}
