//we will be using a staircase method, which is used on sorted row and sorted column
//start from last elemnt of 1st row i.e st=mat[0][m-1]
//T.c = O(n+m) if n>>>>m. T.C=O(n) ,  if m>>>n T.C = O(m)
//to search in sorted matrix

#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool search(int mat[][4], int n, int m, int key){
    int i=0, j=m-1;
    while(i<n && j>=0){
        if(mat[i][j]==key){
            cout << "(" << i << ", " << j << ")" << endl;
            return true;
        }else if(mat[i][j]>key){
             j--;
        }
        else i++;
    }
    return false;
}
int main(){
    int mat[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    cout<<search(mat,3 , 4, 9);
}