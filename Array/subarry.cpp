#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int subPrint(vector<int>& nums){
    int n=nums.size();
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            for(int i=st;i<=end;i++){
                cout<<nums[i];
            }
            cout<<",";
        }
        cout<<endl;
    }
}
int subarraySumbf(vector<int>& nums){
    int n=nums.size();
    int ms=INT_MIN;
    for(int st=0;st<n;st++){
        for(int end=st;end<n;end++){
            int cs=0;
            
            for(int i=st;i<=end;i++){
                cs=cs+nums[i];
                ms=max(cs,ms);
            }
        }
    }
    return ms;
}
int main(){
    vector<int>nums={5,4,-1,7,8};
    // subPrint(nums);
    cout<<subarraySumbf(nums);
}