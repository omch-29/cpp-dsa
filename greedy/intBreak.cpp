//Given an integer n, break it into the sum of k positive integers, where k >= 2, and maximize the product of those integers.

//Return the maximum product you can get.
#include<bits/stdc++.h>
using namespace std;

int ib(int n){
    int res=1;
    while(n>4){
        res*=3;
        n-=3;
    }
    return res*n;
}





int main(){
    int n = 10;     //36
    cout<<ib(n);
}