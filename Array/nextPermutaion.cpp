#include<bits/stdc++.h>
using namespace std;

void np(vector<int>& nums){
    int n=nums.size();
    int i=n-2;
    while(i>=0 && nums[i]>=nums[i+1]) i--;
    if(i>=0){
        int j=n-1;
        // while(j>=0 && nums[j]<=nums[i]) j--;   or 
        while(j>=0){
            if(nums[j]>nums[i]) break;
            else j--;
        }
        swap(nums[i],nums[j]);
    }
    reverse(nums.begin()+i+1, nums.end());
}

int main(){
    vector<int> arr = {1,2,3};
    np(arr);
    for(int a:arr) cout<<a<<" ";
}