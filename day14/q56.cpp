//write a program to find duplicates in array
#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the elements:";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
                count++;
            }
        }
    }
    if(count==0){
        cout<<"There is no duplicate element.";
    }
    else{
        cout<<"is the duplicat element.";
    }
} 