// write a program to intersection of array
#include<iostream>
using namespace std;
int main(){
    int arr1[3]={9,4,5};
    int arr2[5]={4,9,5,6,2};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int arr[n1+n2],count=0;
    for(int i=0;i<n1;i++){
        arr[i]=arr1[i];
    }
    for(int i=0;i<n2;i++){
        arr[n1+i]=arr2[i];
    }
    for(int i=0;i<n1+n2;i++){
        bool isduplicate=false;
        for(int j=0;j<count;j++){
            if(arr[i]==arr[j]){
                isduplicate=true;
                break;
            }
        }
        if(!isduplicate){
            arr[count]=arr[i];
            count++;
        }
    }
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
            }
        }
    }

}