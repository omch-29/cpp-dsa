//to show subarray with maximum sum
#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int kadanes(vector<int>& nums){
    int ms=INT_MIN;
    int cs=0;
    for(int num:nums){
        cs= cs+num;
        ms=max(ms,cs);
        if(cs<0) cs=0;
    }
    return ms;
}
int main(){
    vector<int>nums = {5,4,-1,7,8};
    cout<<kadanes(nums);
}