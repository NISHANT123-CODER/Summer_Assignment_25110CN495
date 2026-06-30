//write a program to sort words by length
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of words:";
    cin>>n; 
    cin.ignore();
    vector<string>words(n);
     cout<<"Enter the words:";
    for(int i=0;i<n;i++){
        cin>>words[i];
    }
    sort(words.begin(),words.end());
    cout<<"\nWords sorted by length:"<<endl;
    for(const string& word:words){
        cout<<word<<"(length:"<<word.length()<<")"<<endl;
    }
}