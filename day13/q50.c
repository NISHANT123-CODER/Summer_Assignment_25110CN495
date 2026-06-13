//write a progrm to find sum and average of array
#include<stdio.h>
void main(){
    int arr[5],sum=0;
    for(int i=0;i<5;i++){
        printf("Enter element number:%d\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<5;i++){
        sum=sum+arr[i];
    }
    printf("The sum of elements is=%d\n",sum);
    int average;
    average=sum/5;
    printf("The average of element is=%d",average);
}