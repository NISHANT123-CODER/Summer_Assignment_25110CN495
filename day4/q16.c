//write a program to print armstrong numbers in a range
#include<stdio.h>
#include<math.h>
int main(){
    int n,m,i,result=0,count=0,remainder;
    printf("Enter starting number:");
    scanf("%d",&n);
    printf("Enter ending number:");
    scanf("\n%d",&m);
    for(i=n;i<=m;i++){
    if(i<0){
        continue;
    }
    int temp=i;
    if(temp==0){
        count=1;
    }
    else{
        while(temp>0){
            temp=temp/10;
            count++;
        }
    }
    while(temp>0){
        temp=temp%10;
        result=result+pow(remainder,count);
        temp=temp/10;
    }
    if(result==i){
        printf("%d",i);
    }
}
printf("\n");
return 0;
}
