//only for sorted arrays
//T.C = O(log n) S.C = O(1)
//X itern are for n times thus, T.C=n/2^(x-1) = 1
//n = 2^(x-1), => log base2 n = log base2(2^x-1) => log2 n = x-1 => x = log n + 1 = log n

#include <iostream>
#include <vector>
using namespace std;
int BS(vector<int>& nums, int tar){
    int st=0,end=nums.size();
    while(st<=end){
        int mid=st+(end-st)/2;
        if(nums[mid]<tar) st++;
        else if(nums[mid]>tar) end--;
        else return mid+1;
    }
    return -1;
}
int main(){
    vector<int>nums = {1,2,4,5,6,7};
    cout<<BS(nums,1);
}