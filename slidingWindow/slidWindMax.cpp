#include<bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k){
    deque<int>dq;
    vector<int>res;
    for(int i=0;i<nums.size();i++){
        while(!dq.empty() && dq.front()<=i-k) dq.pop_front();      //or if inst of while
        while(!dq.empty() && nums[i]>=nums[dq.back()]) dq.pop_back();
        dq.push_back(i);
        if(i>=k-1) res.push_back(nums[dq.front()]);         //checking if window is formed as it should be equal to k or grater
    }
    return res;
}
vector<int> maxSlidingWindow2(vector<int>& nums, int k){
    priority_queue<pair<int,int>>pq;
    vector<int>res;
    for(int i=0;i<k;i++){
        pq.push({nums[i],i});
    }
    res.push_back(pq.top().first);
    for(int i=k;i<nums.size();i++){
        while(!pq.empty() && pq.top().second <= (i-k)) pq.pop();
        pq.push({nums[i],i});
        res.push_back(pq.top().first);
    }
    return res;
}
int main(){
    vector<int>arr = {1,3,-1,-3,5,3,6,7};
    vector<int>res = maxSlidingWindow(arr,3);       //[3,3,5,5,6,7]
    vector<int>res2 = maxSlidingWindow2(arr,3);
    for(int r:res) cout<<r<<" ";
    cout<<endl;
    for(int r:res2) cout<<r<<" ";
}