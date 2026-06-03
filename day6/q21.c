//write a program to convert decimal to binary
#include<stdio.h>
int main(){
    int n,bin=0,remainder,place=1;
    printf("Enter a decimal number:");
    scanf("%d",&n);
    while(n>0){
        remainder=n%2;
        place=place*10;
        bin=bin+(remainder*place);
        n=n/2;
    }
    printf("binary equivalent of %d is %d\n",n,bin);
    return 0;
}