#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums = {9,4,5,3,45,67,88};
    int st=0,end=nums.size()-1;
    while(st<=end){
        swap(nums[st], nums[end]);
        st++;
        end--;
    }
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}