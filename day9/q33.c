//write a program to print reverse star pattern
#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=n;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}