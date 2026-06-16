//write a program to move zeroes to end
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
    int insertpos=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr[insertpos]=arr[i];
            insertpos++;
        }
    }
    while(n>insertpos){
        arr[insertpos]=0;
        insertpos++;
    }
    cout<<"result";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}