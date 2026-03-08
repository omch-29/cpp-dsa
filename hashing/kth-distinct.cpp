#include<bits/stdc++.h>
using namespace std;


int kd(vector<int>& nums,int k){
unordered_map<int,int>freq;
int cnt=0;
for(int n:nums) freq[n]++;
for(int n:nums){
    if(freq[n]==1){
        cnt++;
        if(cnt==k) return n;
    }
}
return -1;
}

int main(){
    vector<int>arr = {3,1,2,1,5};
    cout<<kd(arr,2);
}

 

