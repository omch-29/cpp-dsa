#include<bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int>& heights){
  int n = heights.size();
  if(heights.empty()) return 0;
  if(n==1) return 0;
  vector<int>nsl(n),nsr(n);
  stack<int>st;
  st.push(0);
  nsl[0]-1;
  for(int i=1;i<n;i++){
    while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
    if(!st.empty()) nsl[i]=st.top();
    else nsl[i]=-1;
    st.push(i);
  }
  while(!st.empty()) st.pop();
  nsr[n-1]=n;
  st.push(n-1);
  for(int i=n-2;i>=0;i--){
    while(!st.empty() && heights[st.top()]>=heights[i]) st.pop();
    if(!st.empty()) nsr[i]=st.top();
    else nsr[i]=n;
    st.push(i);
  }
  int maxArea=0;
  for(int i=0;i<n;i++){
    maxArea = max(maxArea, (heights[i]*(nsr[i]-nsl[i]-1)));
  }
  return maxArea;
}
int main(){
    vector<int>heights = {2,1,5,6,2,3};
    cout<<largestRectangleArea(heights);
}