#include <iostream>
#include <vector>
#include<cstring>
#include<stack>
#include<unordered_map>
#include <climits>
using namespace std;
int largestRectangleArea(vector<int>& heights){
  if(heights.empty()) return 0;
  if(heights.size()==1) return heights[0];
  int n=heights.size();
  vector<int>nsr(n),nsl(n);
  stack<int>s;
  nsl[0]=-1;
  s.push(0);
  for(int i=1;i<n;i++){
    while(!s.empty() && heights[i]<=heights[s.top()]) s.pop();
    if(s.empty()) nsl[i]=-1;
    else nsl[i]=s.top();
    s.push(i);
  }
}
int main(){
    vector<int>heights = {2,1,5,6,2,3};
    cout<<largestRectangleArea(heights);
}