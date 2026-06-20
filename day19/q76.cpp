//write a program to find diagonal sum
#include<iostream>
using namespace std;
int main(){
    int mat[3][3],diagonalsum=0;
     cout<<"Enter the elements of matrix:";
    
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          cin>>mat[i][j];
       }
     }
      for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==j){
                diagonalsum=diagonalsum+mat[i][i];
            }
        }
     }
     cout<<"sum of diagonal elements: "<<diagonalsum;
}