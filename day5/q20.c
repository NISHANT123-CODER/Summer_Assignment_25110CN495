//write a program to find largest prime factor
#include<stdio.h>
int main(){
    int n,originalnum,maxprimefactor=-1;
    printf("Enter a number:");
    scanf("%d",&n);
    originalnum=n;
    while(n%2==0){
        maxprimefactor=2;
        n=n/2;
    }
    for(int i=3;i*i<=n;i=i+2){
        while(n%i==0){
            maxprimefactor=i;
            n=n/i;
        }
    }
    if(n>2){
        maxprimefactor=n;
    }
    printf("the largest prime factor of %d is %d",originalnum,maxprimefactor);
    return 0;
}