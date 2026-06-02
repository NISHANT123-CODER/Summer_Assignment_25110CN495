//write a program to check strong number
#include<stdio.h>
int main(){
    int n,sum=0,remainder,originalnum,fact=1;
    printf("Enter a number:");
    scanf("%d",&n);
    originalnum=n;
    while(n>0){
        remainder=n%10;
        fact=1;
        for(int i=1;i<=remainder;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==originalnum){
        printf("strong number");
    }
    else{
        printf("not strong number");
    }
    return 0;
}