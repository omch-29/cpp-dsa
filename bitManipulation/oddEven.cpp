//ODD AND EVEN NUMBERS:-
// if right-most bit = 1 = odd, if = 0 =even
// odd & 1 = 1, even & 1 = 0
#include <iostream>
#include <vector>
#include<cstring>
#include<algorithm>
#include<string>
#include<unordered_map>
#include <climits>
using namespace std;
bool isEven(int n){
    return (n&1)==0;
}
int main(){
    int n;
    cout<<"enter:";
    cin>>n;
    // if((n&1)==0) cout<<"even";
    // else cout<<"odd";
    cout<<(n>>1)<<endl;
    string res;
    while(n>0){
        res+=char('0'+(n&1));
        n=n>>1;
    }
    reverse(res.begin(),res.end());
    cout<<res;
    // cout<<isEven(n);
}
