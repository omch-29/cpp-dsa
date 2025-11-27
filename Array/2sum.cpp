#include <iostream>
#include <vector>
#include<cstring>
#include<unordered_map>
#include <climits>
using namespace std;

pair<int,int> twosum(vector<int>& nums, int tar){
    int n=nums.size();
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        int sec=tar-nums[i];
        if(mp.find(sec)!=mp.end()) return {i,mp[sec]};
        mp[nums[i]]=i;
    }
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(nums[i]+nums[j]==tar) return {i, j};

    //     }
    // }
    return {-1, -1};
}

int main(){
    vector<int>nums={2,4,7,8,9};
    int tar=9;
   auto ans = twosum(nums, tar);
    cout << ans.first << " " << ans.second;
}