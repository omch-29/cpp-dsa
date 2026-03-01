#include<bits/stdc++.h>
using namespace std;

vector<int> paes(vector<int>& nums){
    int n=nums.size(),pre=1,suf=1;
    vector<int>res(n);
    for(int i=0;i<n;i++){
        res[i]=pre;
        pre*=nums[i];
    }
    for(int i=n-1;i>=0;i--){
        res[i]*=suf;
        suf*=nums[i];
    }
    return res;
}
int main(){
    vector<int>arr = {1,2,3,4};
    vector<int>res = paes(arr);
    for(int r:res) cout<<r<<" ";
}
//product of array except self