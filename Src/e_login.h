#pragma once
#include<stdio.h>

int Admin(){
    int secKey = 9012912;
    int inKey;
    printf("Enter the security code given by the bank ");
    scanf("%d",&inKey);

    if(inKey==secKey){
        return 1;
    }else{
        return 0;
    }
}