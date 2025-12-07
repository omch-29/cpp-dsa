#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int stock(vector<int>& nums){
    int bb=nums[0];
    int cp=0,mp=0;
    for(int num:nums){
        if(num>bb) mp=max(mp,num-bb);
        bb=min(bb, num);
    }
    return mp;
}
int main(){
    vector<int>nums={7,1,5,3,6,4};
    vector<int>arr={7,6,4,3,1};
    cout<<stock(nums)<<endl;
    cout<<stock(arr);
}