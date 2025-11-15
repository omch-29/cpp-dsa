//can perform on any array whether it is sorted or unsorted.
#include <iostream>
#include <vector>
using namespace std;

int ls(vector<int>& nums, int key, int n) {
    for (int i = 0; i<n; i++) {
        if (nums[i] == key)
            return i+1;
    }
    return -1;  // not found
}
int main(){
    vector<int>nums= {1,2,3,4,5,6,7,8};
    cout<<ls(nums, 2,8);
    
}