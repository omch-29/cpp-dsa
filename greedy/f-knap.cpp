#include<iostream>
#include<vector>
#include <algorithm>
#include<climits>
using namespace std;
bool compare(pair<double,int>p1, pair<double,int>p2){
    return p1.first>p2.first;
}
int fractionalKnapSack(vector<int>&val, vector<int> &wt, int w){
    int n=val.size();
    vector<pair<double,int>>ratio(n,{0.0,0});
    for(int i=0;i<n;i++){
        ratio[i]={val[i]/(double)wt[i],i};
    }
    sort(ratio.begin(),ratio.end(),compare);
    // for(auto& it:ratio) cout<<it.first<<" "<<it.second<<endl;
    double ans=0;
    for(int i=0;i<n;i++){
        int idx=ratio[i].second;
        if(wt[idx]<=w){
            ans+=val[idx];
            w-=wt[idx];
        }else{
            ans+=ratio[i].first * w;
            w=0;
            break;
        }
    }
    return ans;
}
int main(){
    vector<int>val={60,100,120};
    vector<int>weight={10,20,30};
    int w=50;
    cout<<fractionalKnapSack(val,weight,w);
}