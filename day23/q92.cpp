//write a program to find maximum occurring character
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string:";
    getline(cin,str);
    std::sort(str.begin(),str.end());
    char maxchar=str[0];
    int maxcount=1;
    int currentcount=1;
    char currentchar=str[0];
    for(int i=1;i<str.length();i++){
        if(str[i]==str[i-1]){
            currentcount++;
        }
        else{
            if(currentcount>maxcount){
                maxcount=currentcount;
                maxchar=str[i-1];
            }
            currentcount=1;
        }
    }
    if(currentcount>maxcount){
        maxcount=currentcount;
        maxchar=str[str.length()-1];
    }
    cout<<"Maximum occuring character:"<<maxchar;
}