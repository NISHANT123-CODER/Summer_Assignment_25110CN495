//write a program to check symmetric matrix
#include<iostream>
using namespace std;
int main(){
    int mat1[3][3],transpose[3][3];
    cout<<"Enter the elements of first matrix:";
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>mat1[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
         transpose[i][j]=mat1[j][i];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
      if(transpose[i][j]==mat1[i][j]){
         cout<<"Symmetric matrix";
      }
      else{
        cout<<"Not a symmetric matrix";
      }
        }
        cout<<endl;
    }
}