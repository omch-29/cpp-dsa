#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int tw(vector<int>h){
    int n=h.size();
    vector<int>lmax(n),rmax(n);
    lmax[0]=h[0],rmax[n-1]=h[n-1];
    for(int i=1;i<n;i++){
        lmax[i]=max(lmax[i-1],h[i]);
    }
    for(int i=n-2;i>=0;i--){
        rmax[i]=max(rmax[i+1],h[i]);
    }
    int tw=0;
    for(int i=0;i<n;i++){
        int cw=min(lmax[i],rmax[i])-h[i];
        if(cw>0) tw+=cw;
    }
    return tw;
}
int main(){
    vector<int>arr = {0,1,0,2,1,0,1,3,2,1,2,1};
    cout<<tw(arr);
}