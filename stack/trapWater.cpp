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
int tw2(vector<int>h){
    int n=h.size();
    int st=0,end=n-1;
    int lmax=0,rmax=0,water=0;
    while(st<end){
        if(h[st]<h[end]){
            lmax=max(lmax,h[st]);
            water+=lmax-h[st];
            st++;
        }else{
            rmax=max(rmax,h[end]);
            water+=rmax-h[end];
            end--;
        }
    }
    return water;
}
int main(){
    vector<int>arr = {4,2,0,3,2,5};
    cout<<tw(arr)<<endl<<tw2(arr);
}