//write a program to write function to find maximum
#include<iostream>
using namespace std;
int findmaximum(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    int a,b;
    cout<<"Enter two number:";
    cin>>a>>b;
    cout<<"the maximum number is="<<findmaximum(a,b);
}