//write a program to set array in descending order
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++){
     cin>>arr[i];
    }
    int a=arr[0],temp;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]<arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Sorted array:";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}