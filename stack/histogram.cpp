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
    vector<int>nsr(n);
    vector<int>nsl(n);
    stack<int>s;
    s.push(0);
    nsl[0]=-1;
    for(int i=1;i<n;i++){
        while(!s.empty() && heights[i]<=heights[s.top()]) s.pop();
        if(s.empty()) nsl[i]=-1;
        else nsl[i]=s.top();
        s.push(i);
    }
    while(!s.empty()) s.pop();
    s.push(n);
    nsr[n-1]=n;
    for(int i=n-2;i>=0;i--){
        int curr=heights[i];
        while(!s.empty() && curr<=heights[s.top()]) s.pop();
        if(s.empty()) nsr[i]=n;
        else nsr[i]=s.top();
        s.push(i);
    }
     int maxArea=0;
        for(int i=0;i<n;i++){
            int ht=heights[i];
            int wt=nsr[i]-nsl[i]-1;
            int area=ht*wt;
            maxArea=max(area, maxArea);
        }
        return maxArea;
}
int main(){
    vector<int>heights = {2,1,5,6,2,3};
    cout<<largestRectangleArea(heights);
}