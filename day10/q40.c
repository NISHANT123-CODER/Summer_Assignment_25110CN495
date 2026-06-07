//write a program to print character pyramid
#include<stdio.h>
void main(){
    int n, i,j,k;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(k=1;k<=n-i;k++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("%c",'A'+j-1);
        }
        printf("\n");
    }
}