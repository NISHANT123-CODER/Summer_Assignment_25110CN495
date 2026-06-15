//write a program to second largest element
#include<iostream>
using namespace std;
int main(){
    int n,count=0,largest,largest2;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the elements:";
        cin>>arr[i];
    }
    largest=arr[0];
    for(int i=0;i<n;i++){
        if(largest<arr[i]){
            largest2=largest;
             largest=arr[i];
        }
    }
    cout<<"The second largest number is="<<largest2;
} 