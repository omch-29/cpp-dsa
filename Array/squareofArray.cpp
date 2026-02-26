#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
vector<int>sos(vector<int>& nums){
    int lp=0,rp=nums.size()-1,idx=nums.size()-1;
    vector<int>res(nums.size());
    while(lp<rp){
        if(abs(nums[lp])>=abs(nums[rp])){
            res[idx--]=nums[lp]*nums[lp++];
        }else{
            res[idx--]=nums[rp]*nums[rp--];
        }
    }
    return res;
}
int main(){
    vector<int>arr = {-4,-1,0,3,10};
    vector<int>res = sos(arr);
    for(int val:res) cout<<val<<" ";
}