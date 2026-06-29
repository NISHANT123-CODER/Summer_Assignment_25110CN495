//write a program to check string rotations
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str1;
    cout<<"Enter the first string:";
    getline(cin,str1);
    string str2;
    cout<<"Enter the second string:";
    getline(cin,str2);
    int len1=str1.length();
    int len2=str2.length();
     bool isrotation=false;
        for(int k=0;k<len1;k++){
            char temp=str1[0];
            for(int i=0;i<len1-1;i++){
                str1[i]=str1[i+1];
               
            }
             str1[len1-1]=temp;
             if(str1==str2){
             isrotation=true;
             break;
             }
        }   
    
       if(isrotation){
                cout<<str2<<"is rotation of "<<str1;
            }
             else if(str1!=str2){
                cout<<str2<<"is not a rotation of "<<str1;
            }
    
}