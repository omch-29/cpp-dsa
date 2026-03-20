#include<bits/stdc++.h>
using namespace std;

void sap(vector<int>& nums){
int j=0;
for(int i=0;i<nums.size();i++){
    if(nums[i]%2==0){
        swap(nums[i],nums[j]);
        j++;
    }
}
}

int main(){
    vector<int>arr = {3,4,2,6,5,7,9,10};
    sap(arr);
    for(int a:arr) cout<<a<<" ";
}