//write a program to write function to find sum of two number
#include<stdio.h>
int findsum(int a,int b){
    return a+b;
}
int main(){
    int a,b;
    printf("Enter two number:");
    scanf("\n%d%d",&a,&b);
    int sum=findsum( a, b);
    printf("the sum of two number is=%d",sum);
    return 0;
}