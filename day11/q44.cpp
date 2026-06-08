//write a program to write function to find factorial
#include<iostream>
using namespace std;
int findfactorial(int n){
    if(n==0 || n==1){
        return 1;
    }
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial *= i;
    }
    return factorial;
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    int result=findfactorial(n);
    if(result==-1){
        cout<<"factorial of negative number doesn't exist"<<endl;
    }
    else{
        cout<<"factorial of"<<n<<"is"<<result;
    }
}