//write a program to find nth fibonacci term
#include<stdio.h>
int main(){
    int n,x=0,y=1,z,i;
    printf("Enter nth term to find:");
    scanf("%d",&n);
    if(n==1){
        printf("the first term of fibonacci series=%d\n",x);
    }
    else if(n==2){
        printf("the second term of fibonacci=%d\n",y);
    }
    else if(n>2){
        for(i=3;i<=n;i++){
            z=x+y;
            x=y;
            y=z;
        }
        printf("the %dth fibonacci term=%d\n",n,y);
    }
    else{
        printf("enter a positive integer:");
    }
    return 0;
}