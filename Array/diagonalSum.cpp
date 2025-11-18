//given matrix of n8m where n=m
//to find sum of diagonal elements


#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int diag(int mat[][3], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j) sum+=mat[i][j];
            else if(j==n-i-1) sum+=mat[i][j];
        }
    }
    return sum;
}
int main(){
   int mat[3][3]={{1,2,3},{5,6,7},{9,10,11}};
   cout<<diag(mat,3);
}