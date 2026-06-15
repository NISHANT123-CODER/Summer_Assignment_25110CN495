//write a program to frequency of element
#include<iostream>
using namespace std;
int main(){
    int n,x,count=0;
    cout<<"Enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the elements:";
        cin>>arr[i];
    }
    cout<<"Enter the element that's you want found:";
    cin>>x;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            count++;
           
        }
    }
    cout<<"the frequency of an element is="<< count;
}