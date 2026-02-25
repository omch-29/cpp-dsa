#include<iostream>
#include<vector>
#include <algorithm>
#include<climits>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals){
    sort(intervals.begin(),intervals.end());
    // for (auto& it : intervals) {
    //     cout << "[ ";
    //     for (int x : it) cout << x << " ";
    //     cout << "]\n";
    // }
    vector<vector<int>> res;
    int st=intervals[0][0],end=intervals[0][1];
    for(int i=0;i<intervals.size();i++){
        if(end<intervals[i][0]){                    //return non-overlapping intervals.
            res.push_back({st,end});
            st=intervals[i][0];
            end=intervals[i][1];
        }else{
            end=max(end, intervals[i][1]);
        }
    }
    res.push_back({st,end});
    return res;
}
vector<vector<int>> merge2(vector<vector<int>>& intervals){
    sort(intervals.begin(), intervals.end());
    int st=intervals[0][0],end=intervals[0][1];
    vector<vector<int>>res;
    for(int i=1;i<intervals.size();i++){
        if(intervals[i][0]<intervals[i-1][1]){
            res.push_back(intervals[i-1]);
            res.push_back(intervals[i]);
        }
    }
    return res;
}
int main() {
    vector<vector<int>> intervals = {{8,10}, {1,3}, {15,18}, {2,6}};
    vector<vector<int>> res = merge(intervals);

    for (auto& it : res) {
        cout << "[ ";
        for (int x : it) cout << x << " ";
        cout << "]\n";
    }
}