//write a program to write function for fibonacci
#include<stdio.h>
int findfibonacci(int n){
    if(n==1 || n==2){
        return 1;
    }
    return(findfibonacci(n-1)+findfibonacci(n-2));
}
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%d",findfibonacci(n));
    return 0;
}