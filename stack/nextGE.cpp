//nums1 = [4,1,2], nums2 = [1,3,4,2]  o/p=[-1,3,-1]
#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2){
    vector<int>res;
    unordered_map<int,int>mp;
    stack<int>st;
    int n2=nums2.size();
    st.push(nums2[n2-1]);
    mp[nums2[n2-1]] = -1;
    for(int i=n2-2;i>=0;i--){
        while(!st.empty() && nums2[i]>=st.top()) st.pop();
        if(st.empty()) mp[nums2[i]] = -1;
        else mp[nums2[i]]  = st.top();
        st.push(nums2[i]);
    }
    for(int val:nums1){
        res.push_back(mp[val]);
    }                                                                       //s.c=o(n2), t.c=O(n)
    return res;
}
int main(){
    vector<int>arr1={4,1,2};
    vector<int>arr2={1,3,4,2};
    vector<int>res = nextGreaterElement(arr1,arr2);
    for(int r:res) cout<<r<<" ";

    cout<<endl;

    vector<int>arr4={2,4};                                  
    vector<int>arr3={1,2,3,4};
    vector<int>res2 = nextGreaterElement(arr4,arr3);
    for(int r:res2) cout<<r<<" ";
}