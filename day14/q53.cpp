#include<iostream>
using namespace std;
int main(){
    int n,num;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
     cout<<"Enter the elements:";
     cin>>arr[i];
    }
    cout<<"Enter the element that's you want to find:";
    cin>>num;
      cout<<"The element is found at index:";
     for(int i=0;i<n;i++){
       
         if(arr[i]==num){
            cout<<i<<",";
         }
     }
   
    
   
}