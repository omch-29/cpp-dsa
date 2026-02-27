#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
#include<climits>
using namespace std;

bool code(vector<int>& nums){
    stack<int>st;
    int n=nums.size();
    int third=INT_MIN;                                  //nums[i]=nums[i], nums
    for(int i=n-1;i>=0;i--){
        if(nums[i]<third) return true;
        while(!st.empty() && st.top()<nums[i]){
            third=st.top(); 
            st.pop();
        }
        st.push(nums[i]);
    }
    return false;
}
vector<int> code2(vector<int>& nums){
    int n=nums.size();
    stack<pair<int,int>>st;
    int thirdVal=INT_MIN,thirdIdx=-1;
    for(int i=n-1;i>=0;i--){
        if(nums[i]<thirdVal) return {nums[i],nums[st.top().second],thirdVal};
        while(!st.empty() && st.top().first<nums[i]){
            thirdVal=st.top().first;
            thirdIdx=st.top().second;
            st.pop();
        }
        st.push(make_pair(nums[i], i));
    }
    return {};
}
int main(){
    vector<int>Arr ={3,1,4,2};
    cout<<code(Arr)<<endl;
    vector<int>res = code2(Arr);
    for(int r:res) cout<<r<<" ";
}