//write a program to find common character
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1;
    cout<<"Enter the first string:";
    getline(cin,str1);
    string str2;
    cout<<"Enter the second string:";
    getline(cin,str2);
    for(int i=0;i<str1.length();i++){
        for(int j=0;j<str2.length();j++){
            if(str1[i]==str2[j]){
                cout<<str1[i];
                break;
            }
        }
    }
}
