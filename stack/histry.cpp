#include<bits/stdc++.h>
using namespace std;
int largestRectangleArea(vector<int>& heights){
  int n=heights.size();
  if(n==0) return 0;
  if(n==1) return heights[0];
  vector<int>nsl(n),nsr(n);
  nsl[0]=-1;
  stack<int>s;
  s.push(0);
  for(int i=1;i<n;i++){
    while(!s.empty() && heights[s.top()]>heights[i]) s.pop();
    if(!s.empty()) nsl[i]=s.top();
    else nsl[i]=-1;
    s.push(i);
  }
  while(!s.empty()) s.pop();
  s.push(n-1);
  nsr[n-1]=n;
  for(int i=n-2;i>=0;i--){
    while(!s.empty() && heights[s.top()]>heights[i]) s.pop();
    !s.empty() ? nsr[i]=s.top() : nsr[i]=-1;
    s.push(i);
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