#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& nums){
    int st=0,end=nums.size()-1;
    while(st<end){
        int mid = st+(end-st)/2;
        if(nums[mid]<nums[end]) end=mid;
        else st=mid+1;
    }
    cout<<nums[end]<<endl;
    return nums[st];
}
int search2(vector<int>& nums){
    int st=0,end=nums.size()-1;
    while(st<end){
        int mid = st+(end-st)/2;
        if(nums[mid]<nums[end]) end=mid;
        else st=mid+1;
    }
    cout<<nums[end]<<endl;
    return nums[st];
}
int main(){
    vector<int> nums = {6,7,8,9,3,4,5};
    cout<<search(nums);
}