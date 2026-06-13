//write a program to count even and odd element
#include<stdio.h>
void main(){
    int arr[5]={2,7,8,9,10},evencount=0,oddcount=0;
    int n=sizeof (arr)/sizeof (arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            evencount++;
        }
        else if(arr[i]%2!=0){
            oddcount++;
        }
    }
    printf("The number of even element=%d\n",evencount);
    printf("The number of odd element=%d",oddcount);
}