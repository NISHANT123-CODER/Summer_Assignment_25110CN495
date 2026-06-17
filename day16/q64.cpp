//write a program to remove duplicates from array
#include<iostream>
#include<vector>
using namespace std;
int main(){
      int n,i,j,count=0;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:";
    for( i=0;i<n;i++){
      cin>>arr[i];
    }
    for(i=0;i<n;i++){
        bool isduplicate=false;
        for(j=0;j<count;j++){
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
    cout<<"Array after removing duplicates:";
    for(i=0;i<count;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}