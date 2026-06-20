//write a program to substract matrices
#include<iostream>
using namespace std;
int main(){
    int mat1[3][3],mat2[3][3],sub[3][3];
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
            sub[i][j]=mat1[i][j] - mat2[i][j];
        }
    }
    cout<<"The substraction of matrix is=\n";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<sub[i][j]<<" ";
        }
        cout<<endl;
    }
   
}