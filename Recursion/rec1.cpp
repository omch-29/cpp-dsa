//function repeatedly calling itself
#include <iostream>
#include <vector>
#include<cstring>
#include<unordered_map>
#include <climits>
using namespace std;
int fact(int n){
    if(n==1) return 1;
    return n*fact(n-1);
}
int fib(int n){
    if(n==0 || n==1) return n;
    return fib(n-1)+fib(n-2);
}
int main(){
    cout<<fact(6)<<endl;
    cout<<fact(5)<<"\n";
    cout<<fib(7);
}