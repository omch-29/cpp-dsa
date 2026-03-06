#include<bits/stdc++.h>
using namespace std;

int me(vector<int>& nums){
    int cnt=0,cnd=0;
    for(int n:nums){
        if(cnt==0) cnd=n;
        if(cnd==n) cnt++;
        else cnt--;
    }
    cnt=0;
    for(int n:nums){
        if(n==cnd) cnt++;
    }
    return cnt>(nums.size()/2) ? cnd : -1;
}


int main(){
    vector<int>arr = {1,2,3,4,5,2,2,2,2,2};
    cout<<me(arr);
}