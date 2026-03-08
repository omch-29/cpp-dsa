#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>             //2,4,1,3,3
#include<unordered_set>             //2 -4 1 3 3
#include<unordered_map>             //2 -4 1 -3 3
#include<string>                    //-2 -4 -1 -3 3
#include<unordered_map>
#include <climits>
using namespace std;
int fd(vector<int>& nums){
    // int dup=-1;
    for(int i=0;i<nums.size();i++){
        int idx=abs(nums[i])-1;     //get the index of that element
        if(nums[idx]<0) return nums[i];
        else nums[idx]=-nums[idx];
    }
    return -1;
}
int main(){
    vector<int>arr={1,2,3,4,1,5};
    cout<<fd(arr);
}