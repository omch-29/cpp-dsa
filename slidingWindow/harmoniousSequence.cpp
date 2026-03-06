//594 harmonious array as an array where the difference between its maximum value and its minimum value is exactly 1.
#include<bits/stdc++.h>
using namespace std;

int findLHS(vector<int>& nums){
    int maxLen=0;
    unordered_map<int,int>freq;
    for(int i:nums) freq[i]++;
    for(auto& it:freq){                                 //O(n) s.c=o(n)
        int key = it.first;
        if(freq.count(key+1)){
            maxLen=max(maxLen, it.second+freq[key+1]);
        }
    }
    return maxLen;
}
int findLHS2(vector<int>& nums){
    sort(nums.begin(), nums.end());
    int left=0,maxLen=0;                                    //O(nlogn + n)= O(n log n)  s.c = o(1)
    for(int right=0;right<nums.size();right++){
        while(nums[right]-nums[left] >1) left++;
        if(nums[right]-nums[left]==1){
            maxLen = max(maxLen, right-left+1);
        }
    }
    return maxLen;
}
int main(){
    vector<int>arr = {1,3,2,2,5,2,3,7};
    cout<<findLHS(arr);
    cout<<endl;
    cout<<findLHS2(arr);
}