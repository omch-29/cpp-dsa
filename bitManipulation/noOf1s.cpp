#include<bits/stdc++.h>
using namespace std;

vector<int> noo(int n){
    vector<int>dp(n+1);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        dp[i]=dp[i>>1]+(i&1);
    }
    return dp;
}

int noo2(int n){
    vector<int>dp(n+1);
    dp[0]=0;
    for(int i=1;i<=n;i++){
        dp[i]=dp[i>>1]+(i&1);
    }
    return dp[n];
}
int noo3(int n){
    int cnt=0;
    while(n!=0){
    n = n&(n-1);
    cnt++;
}
    return cnt;
}
int main(){
    vector<int>res = noo(22);
    // for(int r:res) cout<<r<<" ";
    cout<<noo3(30); 
}