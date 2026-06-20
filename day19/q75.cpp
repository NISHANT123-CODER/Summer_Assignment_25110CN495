//write a program to transpose matrix
#include<iostream>
using namespace std;
int main(){
    int n,m;
    int mat1[n][m],transpose[m][n];
    cout<<"Enter the size of rows:";
    cin>>n;
    cout<<"Enter the size of column: ";
    cin>>m;
    cout<<"Enter the elements of first matrix:";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat1[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<mat1[i][j]<<" ";
        }
        cout<<endl;
    }
     
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            transpose[j][i]=mat1[i][j];
        }
     }
     cout<<"The transpose of matrix is=\n";
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
         cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
     }
     return 0;
}