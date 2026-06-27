//write a program to find first non repeating character
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string:";
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        bool found=false;
        for(int j=0;j<str.length();j++){
            if(i != j && str[i]==str[j]){
            found=true;
            break;
            }
        }
        if(!found){
            cout<<str[i]<<endl;
        }
    }
}