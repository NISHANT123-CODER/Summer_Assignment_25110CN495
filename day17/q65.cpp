//write a program to merge arrays
#include<iostream>
using namespace std;
int main(){
    int arr1[3]={1,2,3};
    int arr2[3]={4,5,6};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int arr[n1+n2];
    for(int i=0;i<n1;i++){
        arr[i]=arr1[i];
    }
        for(int i=0;i<n2;i++){
         arr[n1+i]=arr2[i];
        }
        cout<<"merged array is:";
        for(int i=0;i<n1+n2;i++){
            cout<<arr[i]<<" ";
        }
}