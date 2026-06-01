//write a program to check Armstrong number
#include<stdio.h>
#include<math.h>
int main(){
    int n,original, count=0,result=0,remainder;
    printf("Enter a number:");
    scanf("%d",&n);
    original=n;
    if(n==0){
        count=1;
    }
    else if(n<0){
        n=-n;
    }
    else{
        while(n>0){
            n=n/10;
            count++;
        }
    }
    while(n>0){
        remainder=n%10;
        result=result+pow(remainder,count);
        n=n/10;
    }
    if(result==original){
        printf("the number is armstrong");
    }
    else{
        printf("the number is not armstrong");
    }
    return 0;
}