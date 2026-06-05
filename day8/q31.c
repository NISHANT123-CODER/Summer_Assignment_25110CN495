//write a program to print character triangle
#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter a number:");
    sacnf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%c",'A'+j-1);
        }
        printf("\n");
    }
    return 0;
}