#include<bits/stdc++.h>
using namespace std;

/*Given an array of points where points[i] = [xi, yi] represents a point on the X-Y plane and an integer k, return the k closest points to the origin (0, 0).

The distance between two points on the X-Y plane is the Euclidean distance (i.e., √(x1 - x2)2 + (y1 - y2)2).*/

vector<vector<int>> kClosest(vector<vector<int>>& points, int k){
    priority_queue<pair<int,int>>pq;
    for(int i=0;i<points.size();i++){
        int dis = (points[i][0]*points[i][0])+(points[i][1]*points[i][1]);
        pq.push({dis,i});
        if(pq.size()>k) pq.pop();
    }
    vector<vector<int>>res;
    while(!pq.empty()){
        res.push_back(points[pq.top().second]);
        pq.pop();
    }
    return res;
}

int main(){
    vector<vector<int>> arr = {{1,3}, {-2,2}};
    vector<vector<int>> res = kClosest(arr,1);
    for(int i=0;i<res.size();i++){
        cout<<res[i][0]<<","<<res[i][1];
    }
}