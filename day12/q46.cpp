//write a program to write function for armstrong number
#include<iostream>
using namespace std;
int isarmstrong(int n){
   int sum=0,remainder,original;
   original=n;
   while(n>0){
    remainder=n%10;
    sum=sum+(remainder*remainder*remainder);
    n=n/10;
   }
   return (sum==original);
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(isarmstrong(n)){
        cout<<n<<"is an armstrong number";
    }
    else{
        cout<<n<<"is not armstrong number";
    }
}