//write a program to convert binary to decimal
#include<stdio.h>
int main(){
    int n,deci=0,remainder,weight=1;
    printf("Enter a decimal number:");
    scanf("%d",&n);
    while(n>0){
        remainder=n%10;
        weight=weight*2;
        deci=deci+(remainder*weight);
        n=n/10;
    }
    printf("decimal equivalent of %d is %d\n",n,deci);
    return 0;
}