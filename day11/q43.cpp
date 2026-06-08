//write a program to write a function to check prime
#include<iostream>
using namespace std;
bool isprime(int n){
    if(n<=1){
        return false;
    }
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(isprime(n)){
        cout<<n<<"is a prime number"<<endl;
    }
    else{
        cout<<n<<"is not a prime number"<<endl;
    }
}