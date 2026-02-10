#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
#include<string>
#include<unordered_map>
#include <climits>
using namespace std;
//return subarray of size k with maxAverage
double sw(vector<int>&nums, int k){
    double windowSum=0,maxSum=0;
    for(int i=0;i<k;i++){
        windowSum+=nums[i];
    }
    maxSum=windowSum;
    for(int i=k;i<nums.size();i++){
        windowSum+=nums[i];
        windowSum-=nums[i-k];
        maxSum=max(maxSum,windowSum);
    }
    return maxSum/4;
}
int main(){
    vector<int>arr={1,12,-5,-6,50,3};
    cout<<sw(arr,4);
}