#include<bits/stdc++.h>
using namespace std;

int maxArea(vector<int>& h){
    int lp=0,rp=h.size()-1;
    int mw=INT_MIN;
    while(lp<rp){
        int wt=rp-lp;
        int ht = min(h[lp], h[rp]);
        int cw = ht*wt;
        mw=max(mw,cw);
        h[lp]<h[rp] ? lp++ : rp--;
    }
    return mw;
}

int main(){
    vector<int>arr = {1,8,6,2,5,4,8,3,7};
    cout<<maxArea(arr);
}