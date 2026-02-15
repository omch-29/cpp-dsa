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
int fd(vector<int>& nums){
    int dup=-1;
    for(int i=0;i<nums.size();i++){
        int idx=abs(nums[i]-1);     //get the index of that element
        if(nums[idx]<0) return nums[i];
        else nums[idx]=-nums[idx];
    }
    return -1;
}
int main(){
    vector<int>arr={1,2,3,3,4};
    cout<<fd(arr);
}