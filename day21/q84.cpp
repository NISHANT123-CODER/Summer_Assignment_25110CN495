//write a program to convert lowercase to uppercase
#include<iostream>
#include<string>
using namespace std;
int main(){
<<<<<<< HEAD
     string str;
=======
   string str;
>>>>>>> fe525cb (Fixed merge conflicts)
    int i=0;
    cout<<"Enter the string:";
    getline(cin,str);
    for(char c: str){
     if((int)c>=97 && (int)c<=123){
        str[i]=(char)((int)c-32);
     }
     i++;
    }
    cout<<str<<endl;
<<<<<<< HEAD
=======
   
>>>>>>> fe525cb (Fixed merge conflicts)
   
   
}
