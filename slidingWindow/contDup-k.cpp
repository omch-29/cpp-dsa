#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<unordered_set>
#include<unordered_map>
#include<string>
#include<unordered_map>
#include <climits>
using namespace std;
//Given an integer array nums and an integer k, 
//return true if there are two distinct indices i and j in the array such that nums[i] == nums[j] and abs(i - j) <= k.
bool containsNearbyDuplicate(vector<int>& nums, int k){
    unordered_set<int>window;
    for(int i=0;i<nums.size();i++){
        if(window.count(nums[i])) return true;
        window.insert(nums[i]);
        if(window.size()>k) window.erase(nums[i-k]);
    }
    return false;
}
bool containsNearbyDuplicate2(vector<int>& nums, int k){
    unordered_map<int,int>mp;
    for(int i=0;i<nums.size();i++){
        if(mp.count(nums[i]) && i-mp[nums[i]]<=k) return true;
        mp[nums[i]]=i;
    }
    return false;
}
int main(){
    vector<int>arr={1,2,3,1};
    cout<<containsNearbyDuplicate(arr,3);
    cout<<containsNearbyDuplicate2(arr,3);
}