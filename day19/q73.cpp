//write a program to add matrices
#include<iostream>
using namespace std;
int main(){
    int mat1[3][3],mat2[3][3],sum[3][3];
    cout<<"Enter the elements of first matrix:";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter the elements of second matrix:";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>mat2[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
    cout<<"The sum of matrix is=\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }
   
}