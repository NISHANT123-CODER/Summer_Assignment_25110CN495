//write a program to convert lowercase to uppercase
#include<iostream>
using namespace std;
int main(){
    char ch;
    for(int i=97;i<=123;i++){
     char ch= (char)i;
    ch-=32;
     cout<<ch<<endl;
    }
   
}