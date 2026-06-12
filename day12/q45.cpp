//write a program to write function for palindrome
#include<iostream>
using namespace std;
int ispalindrome(int n){
    int remainder,reverse=0,original;
   original=n;
   while(n>0){
    remainder=n%10;
    reverse=reverse*10+remainder;
    n=n/10;
   }
   return (original==reverse);
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(ispalindrome(n)){
        cout<<n<<"is a palindrome number";
    }
    else{
        cout<<n<<"is not a palindrome number";
    }
}