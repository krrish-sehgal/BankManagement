#include<stdio.h>
#include<string.h>

int main (){
    char pass[100] = "krrish#9987";
    char check[20];
    scanf("%s",check);

    printf("%d",strcmp(pass,check));
}
