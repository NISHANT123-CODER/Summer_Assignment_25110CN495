//write a program to find missing number in array
#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,5};
    int expectedsum,actualsum=0;
    int n=sizeof (arr)/sizeof (arr[0]);
    for(int i=0;i<n;i++){
        actualsum=actualsum+arr[i];
    }
    expectedsum=n*(n+1)/2;
    int missingnumber=expectedsum-actualsum;
  cout<<missingnumber<<"is the missing number in array.";
}