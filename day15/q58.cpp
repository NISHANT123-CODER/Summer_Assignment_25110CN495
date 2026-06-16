//write a program to rotate array left
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
    
        for(int j=1;j<n;j++){
            cout<<arr[j];
        }
   // }
    
   cout<<arr[0];
}