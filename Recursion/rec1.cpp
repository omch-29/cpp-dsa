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
int main(){
    cout<<fact(6)<<endl;
    cout<<fact(5);
}