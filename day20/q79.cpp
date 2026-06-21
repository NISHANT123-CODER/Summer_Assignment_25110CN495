//write a program to find row-wise sum
#include<iostream>
using namespace std;
int main(){
    int mat[3][3];
    cout<<"Enter the elements of matrix:";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<3;i++){
        int rowsum=0;
        for(int j=0;j<3;j++){
            rowsum+=mat[i][j];
        }
        cout<<"Sum of row:"<<(i+1)<<":"<<rowsum<<endl;
    }

}