//write a program to find first repeating character
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int count=0;
    cout<<"Enter a string:";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        bool found=false;
        for(int j=0;j<str.length();j++){
            if(i!=j && str[i]==str[j]){
                found=true;
                //count++;
                break;
                //count++;
            }
        }
        if(found==1){
            cout<<"The first repeating character:"<<str[i];
            break;
        }    
    }
     //cout<<"not found";
     
}