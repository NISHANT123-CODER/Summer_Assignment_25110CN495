//write a program to multiply matrices
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,m,i,j, multi[3][3];
    int mat1[3][3],mat2[3][3];
    cout<<"Enter the elements of first matrix:";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>mat1[i][j];
        }
    }
    cout<<"Enter the elements of second matrix:";
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>mat2[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
           multi[i][j]=0;
           for(int k=0;k<3;k++){
            multi[i][j]+=mat1[i][k]*mat2[k][j];
           }
        }
    }
     cout<<"the multiplication of matrices:\n";
       for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<multi[i][j]<<" ";
        }
        cout<<endl;
    }
}