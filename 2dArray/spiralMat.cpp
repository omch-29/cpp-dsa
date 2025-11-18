//given matrix of n*m
//to print in spiral manner-> top->right->bottom->left

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int spiral(int mat[][4], int n, int m){
    int srow=0,erow=n-1,scol=0,ecol=m-1;
    while(srow<=erow && scol<=ecol){
    for(int j=scol;j<=ecol;j++){
        cout<<mat[srow][j]<<" ";
    }
    for(int i=srow+1;i<=erow;i++){
        cout<<mat[i][ecol]<<" ";
    }
    for(int j=ecol-1;j>=scol;j--){
        if(srow==erow) break;
        cout<<mat[erow][j]<<" ";
    }
    for(int i=erow-1;i>=srow+1;i--){
        if(scol==ecol) break;
        cout<<mat[i][scol]<<" ";
    }
    srow++,scol++;
    erow--,ecol--;
}
}

int main(){
    int mat[4][4]={{1,2,3,10},{4,5,6,11},{7,8,9,12},{13,14,15,16}};
    int mat2[3][4]={{1,2,3,10},{4,5,6,11},{7,8,9,12}};
    spiral(mat2,3,4);
    cout<<endl;
    spiral(mat,4,4);
}