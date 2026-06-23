//write a program to count words in a sentence
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a sentence:";
    getline(cin,str);
    int count=0;
    bool inword=false;
    for(int i=0;i<str.length();i++){
        if(str[i] != ' '){
            if(!inword){
                count++;
                inword=true;
            }
            
        }
        else{
                inword=false;
            }
    }
    cout<<"Total number of words:"<<count<<endl;
}