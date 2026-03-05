#include<bits/stdc++.h>
using namespace std;

void mz(vector<int>& nums){
    int j=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0) nums[j++]=nums[i];
    }
    while(j<nums.size()){
        nums[j++]=0;
    }
}
void mz2(vector<int>& nums){
    int j=nums.size()-1;;
    for(int i=nums.size()-1;i>=0;i--){
        if(nums[i]!=0) nums[j--]=nums[i];
    }
    while(j>=0){
        nums[j--]=0;
    }
}
int main(){
    vector<int>arr={0,2,3,0,4,2,0,4};
    mz(arr);
    for(int a:arr) cout<<a<<" ";
    cout<<endl;
    vector<int>arr2 = {11,0,3,0,4,5,6,0,0};
    mz2(arr2);
    for(int a:arr2) cout<<a<<" ";
    return 0;
}