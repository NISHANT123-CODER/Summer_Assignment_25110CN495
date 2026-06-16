//write a program to rotate array right
#include<iostream>
using namespace std;
int main(){
    int n,k,start,end,temp;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the element:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   k=3;
   k=k%n;
   if(k>0){
    start=0;
    end=n-1;
    while(start<end){
      temp=arr[start];
      arr[start]=arr[end];
      arr[end]=temp;
      start++;
      end--;
    }
    start=k;
    end=n-1;
    while(start<end){
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
   }
   cout<<"rotated array";
   for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
   }
}