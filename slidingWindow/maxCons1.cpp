// return max consecutive onses after flipping k 0's to 1's
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
int mco(vector<int>& nums, int k){
    int left=0,ans=0,zc=0;
    for(int right=0;right<nums.size();right++){
        if(nums[right]==0) zc++;
        while(zc>k){
            if(nums[left]==0) zc--;
            left++;
        }
        ans=max(ans, right-left+1);
    }
    return ans;
}
int main(){
    vector<int> arr={1,1,1,0,0,0,1,1,1,1,0};
    vector<int> arr2={0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    cout<<mco(arr,2);
    cout<<endl<<mco(arr2,3);
}