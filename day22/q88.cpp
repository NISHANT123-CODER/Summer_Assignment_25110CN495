//write a program to remove space from string
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string:";
    getline(cin,str);
    int writeindex=0;
    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            str[writeindex]=str[i];
            writeindex++;
        }
    }
    str.resize(writeindex);
    cout<<"string after removing space:"<<str<<endl;
}