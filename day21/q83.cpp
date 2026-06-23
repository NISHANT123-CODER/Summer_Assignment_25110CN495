//write a program to count vowels and consonants
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
string str;
int vowels=0;
int consonants=0;
cout<<"Enter a string:";
getline(cin,str);
for(char c: str){
    if(isalpha(c)){
        char lowerC=tolower(c);
        if(lowerC=='a' || lowerC=='e' || lowerC=='i' || lowerC=='o' || lowerC=='u'){
        vowels++;
        }
        else{
        consonants++;
    }
    }
}
cout<<"vowels:"<<vowels<<endl;
cout<<"consonants:"<<consonants;
}