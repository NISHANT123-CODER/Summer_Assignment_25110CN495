//write  a program to binary search
#include<iostream>
using namespace std;
int main(){
    int n,temp;
    cout<<"Enter the size of array:";
     cin>>n; 
     int arr[n];
     cout<<"Enter the elements:";
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;i++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int x;
    cout<<"Enter the element to search:";
    cin>>x;
    int low=0,high=n-1,mid;
    bool found=false;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==x){
            cout<<"Element"<<x<<"found at position"<<mid+1;
            found=true;
            break;
        }
        else if(arr[mid]<x){
            low=mid+1;
        }else{
            high=mid-1;
        }
        
    }
    if(!found){
        cout<<"Element not found";
    }
} 
   