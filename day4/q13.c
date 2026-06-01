//write a program to generate fibonacci series
#include<stdio.h>
int main(){
    int n,x=0,y=1,z;
    printf("enter a number:");
    scanf("%d",&n);
    printf("%d %d",x,y);
    for(int i=1;i<=n-2;i++){
        z=x+y;
        printf("%d",z);
        x=y;
        y=z;
    }
    return 0;

}