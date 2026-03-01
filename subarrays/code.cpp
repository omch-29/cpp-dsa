#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {1,2,3,4};
    int cnt=0;
    // for(int i=0;i<nums.size();i++){
    //     for(int j=0;j<=i;j++){
    //         cnt++;
    //     }
    // }
    // for(int i=0;i<nums.size();i++){
    //     for(int j=i;j<nums.size();j++){
    //         cnt++;
    //     }
    // }
    int l=0;
    for(int r=0;r<nums.size();r++){
        cnt+=r-l+1;
    }
    cout<<cnt;
}