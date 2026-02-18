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
int me(vector<int>& nums){
    int n=nums.size();
    for(int i=0;i<nums.size();i++){
        int cnt=0;
        for(int j=0;j<nums.size();j++){
            if(nums[i]==nums[j]) cnt++;
        }
        if(cnt>(n/2)) return nums[i];
    }
    return -1;
}
int me2(vector<int>& nums){
    unordered_map<int,int>mp;
    for(int n:nums) mp[n]++;
    for(int n:nums) if(mp[n]>(n/2)) return n;
}
int me3(vector<int>& nums){
    int cnt=0,cnd=0;
    for(int val:nums){
        if(cnt==0) cnd=val;
        if(val==cnd) cnt++;
        else cnt--;
    }
    cnt=0;
    for(int n:nums){
        if(n==cnd) cnt++;
    }
    return cnt>nums.size()/2?cnd:-1;
}
int main(){
    vector<int> arr={3,2,3};
    cout<<me(arr)<<endl;
    cout<<me3(arr);
}
//mjdfef