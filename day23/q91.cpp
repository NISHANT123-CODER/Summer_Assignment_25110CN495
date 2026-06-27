//write a program to check anagram string
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str1;
    cout<<"Enter first string:";
    getline(cin,str1);
    //std::string str1;
    string str2;
    cout<<"Enter second string:";
    getline(cin,str2);
     //std::string str2;
     if(str1.length()==str2.length()){
      std::sort(str1.begin(),str1.end());
      std::sort(str2.begin(),str2.end());
      
     }
     if(str1==str2){
        cout<<"The strings are anagram."<<endl;
     }
     else{
        cout<<"The strings are not anagram.";
     }
    
}