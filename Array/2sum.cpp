#include <iostream>
#include <vector>
#include<cstring>
#include<unordered_map>
#include <climits>
using namespace std;

pair<int,int> twosum(vector<int>& nums, int tar){
    int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==tar) return {i, j};

        }
    }
    return {-1, -1};
}

int main(){
    vector<int>nums={2,4,7,8,9};
    int tar=9;
   auto ans = twosum(nums, tar);
    cout << ans.first << " " << ans.second;
}