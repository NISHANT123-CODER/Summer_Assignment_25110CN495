//write a program to recursive reverse number
#include<stdio.h>
int reverse(int n){
    int reverse=0;
    while(n>0){
        int remainder=n%10;
        reverse=reverse*10+remainder;
        n=n/10;
    }
    return reverse;
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d",reverse(n));
    return 0;
}