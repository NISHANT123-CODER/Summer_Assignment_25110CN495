//write a program to selection sort
#include<iostream>
#include<vector>
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
    for(int i=0;i<n-1;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex]){
                minindex=j;
            }
        }
        if(minindex!=i){
             temp=arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
        }
    }
    cout<<"Sorted array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}