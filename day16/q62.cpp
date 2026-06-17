//write  a program to find maximum frequency element
#include<iostream>
using namespace std;
int main(){
    int n,maxcount=0;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
       int maxelement=arr[0]; 
    for(int i=0;i<n;i++){
        int currentelementcount=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
           currentelementcount++;
            }
        }
        if(currentelementcount>maxcount){
            maxcount=currentelementcount;
            maxelement=arr[i];
        }
    }
    cout<<"The element with the maximum friquency is:"<<maxelement<<endl;
    cout<<"it appeared"<< maxcount<<"times."<<endl;
}