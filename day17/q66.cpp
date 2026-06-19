//write a program to union of array
#include<iostream>
using namespace std;
int main(){
    int arr1[4]={1,2,3,4};
    int arr2[5]={2,3,6,7,8};
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
     cout<<"Array after union is:";
    for(int i=0;i<n1+n2;i++){
        cout<<arr[i]<<" ";
   
    }
}