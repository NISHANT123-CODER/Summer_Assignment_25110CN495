//write a program to find largest and smallest element
#include<stdio.h>
void main(){
    int arr[5];
    int largest,smallest;
    for(int i=0;i<5;i++){
        printf("Enter element number:");
        scanf("%d",&arr[i]);
    }
    largest=arr[0];
    smallest=arr[0];
    for(int i=0;i<5;i++){
        if(largest<arr[i]){
            largest=arr[i];
        }
        else if(smallest>arr[i]){
            smallest=arr[i];
        }
    }
    printf("the largest value=%d\n",largest);
    printf("the smallest value=%d",smallest);
}