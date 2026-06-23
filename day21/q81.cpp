//write a program to find string length without strln()
#include<iostream>
#include<string>
using namespace std;
int main(){
  string str;
  int length=0;
  cout<<"Enter the string:";
  //cin>>str;
  getline( cin , str);
  for(char c : str){
     length++;
  }
  cout<<"The length of string is:"<<length;
}