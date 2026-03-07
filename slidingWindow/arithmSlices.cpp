//An integer array is called arithmetic if it consists of at least three elements and if the difference between any two consecutive elements is the same
#include<bits/stdc++.h>
using namespace std;

int numberOfArithmeticSlices(vector<int>& nums){
    int n=nums.size();
    int curr=0,ans=0;
    for(int i=2;i<n;i++){
        if(nums[i]-nums[i-1] == nums[i-1]-nums[i-2]){
            curr=curr+1;
            ans+=curr;
        }else curr=0;
    }
    return ans;
}


int main(){
    vector<int>arr = {1,2,3,4};             //3
    cout<<numberOfArithmeticSlices(arr);
}