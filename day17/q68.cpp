//write a program to find common elements
#include<iostream>
using namespace std;
int main(){
    int arr1[]={1,2,4,5,6};
    int arr2[]={2,3,5,7,8,5};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    int maxsize=(n1<n2)?n1:n2;
    int arr[maxsize];
    int count=0;
    for(int i=0;i<n1;i++){
        arr[i]=arr1[i];
    }
    for(int i=0;i<n2;i++){
        arr[n1+i]=arr2[i];
    }
    for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
        if(arr1[i]==arr2[j]){
        bool isduplicate=false;
        for(int k=0;k<count;k++){
            if(arr[k]==arr1[i]){
                isduplicate=true;
                break;
            }
        }
        if(!isduplicate){
            arr[count]=arr1[i];
            count++;
        }
    }
}
    }
    if(count==0){
        cout<<"No common elements found.";
    }else{
        cout<<"Common elements are:";
        for(int i=0;i<count;i++){
            count<<arr[i];
        }
        cout<<endl;
    }
    
}