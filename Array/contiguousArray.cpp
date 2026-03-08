//Given a binary array nums, return the maximum length of a contiguous subarray with an equal number of 0 and 1.
#include<bits/stdc++.h>
using namespace std;

int findMaxLength(vector<int>& nums){
    unordered_map<int,int>mp;
    mp[0]=-1;
    int sum=0,maxLen=0;
    for(int i=0;i<nums.size();i++){
        sum+= (nums[i]==1) ? 1 : -1;
        if(mp.count(sum)) maxLen = max(maxLen, i-mp[sum]);
        else mp[sum]=i;
    }
    return maxLen;
}

int main(){
    vector<int>arr = {0,1,1,1,1,1,0,0,0};
    cout<<findMaxLength(arr);
}