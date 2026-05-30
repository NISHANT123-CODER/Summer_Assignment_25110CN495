//write a program to print prime numbers in a range
#include<stdio.h>
int main(){
    int n,m,i,j,count=0;
    printf("Enter two numbers:");
    scanf("\n%d%d",&n,&m);
    for(i=n;i<=m;i++){
        for(j=1;j<1;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==2){
            printf("\n%dis prime number",i);
        }
        else{
            printf("invalid input");
        }
    }
    return 0;

}