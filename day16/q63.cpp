//write a program to find pair with given sum
#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n],sum,givensum=5;
    cout<<"Enter the elements:";
    for( i=0;i<n;i++){
      cin>>arr[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            sum=arr[i]+arr[j];
             if(sum==givensum){
        cout<<"("<<arr[i]<<","<<arr[j]<<")";
        }
    }
   
    }
}