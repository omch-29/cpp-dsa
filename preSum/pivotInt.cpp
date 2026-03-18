//Given a positive integer n, find the pivot integer x such that:
//The sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively.
#include<bits/stdc++.h>
using namespace std;

int pivot(int n){

    int x = n*(n+1)/2;
    int a = sqrt(x);
    if(a*a == x) return a;
    else return -1;

    // for(int i=1;i<=n;i++){
    //     int ls=0,rs=0;
    //     for(int j=1;j<=i;j++) ls+=j;
    //     for(int j=i;j<=n;j++) rs+=j;
    //     if(ls==rs) return i;
    // }
    // return -1;
}

int main(){
    int n=8;
    cout<<pivot(n);
}

//git