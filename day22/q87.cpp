//write a program to character frequency
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string:";
    getline(cin,str);
    int frequency[256]={0};
    for(int i=0;i<str.length();i++){
        int asciivalue=(unsigned char)str[i];
        frequency[asciivalue]++;
    }
    cout<<"\ncharacter frequencies:\n";
    for(int i=0;i<256;i++){
        if(frequency[i]>0){
            if((char)i==' '){
                cout<<"[space]:"<<frequency[i]<<endl;
            }
            else{
                cout<<"'"<<(char)i<<":"<<frequency[i]<<endl;
            }
        }
    }
}