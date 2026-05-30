//write a program to find LCM of two number
#include<stdio.h>
int findGCD(int a,int b){
    if(b==0){
        return a;
    }
    return findGCD(b,a%b);
}
int findLCM(int a,int b){
    return (a/findGCD(a,b))*b;
}
int main(){
    int num1,num2,gcd,lcm;
    printf("Enter two number:");
    scanf("%d %d",&num1,&num2);
    gcd=findGCD(num1,num2);
    lcm=findLCM(num1,num2);
    printf("The LCM of %d and %dis:%d\n",num1,num2,lcm);
    return 0;
}