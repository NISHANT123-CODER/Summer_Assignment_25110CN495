//write a program to find longest word
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string:";
    getline(cin,str);
    string longestword="";
    string currentword="";
    for(int i=0;i<str.length();i++){
        if(i<str.length() && str[i] != ' '){
           currentword += str[i];
        }else{
            if(currentword.length()>longestword.length()){
                longestword=currentword;
            }
            currentword="";
        }
    }
    cout<<"The longest word is:"<<longestword<<endl;
    cout<<"Its length is:"<<longestword.length()<<endl;
}