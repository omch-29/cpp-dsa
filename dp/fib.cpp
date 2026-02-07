#include<iostream>
#include<vector>
using namespace std;
int fibr(int n){
        if(n<=1) return n;
        return fibr(n-1)+fibr(n-2);
    }
int main(){
    cout<<"ente index:";
    int n;
    cin>>n;
    //recursion
    cout<<fibr(n);
}