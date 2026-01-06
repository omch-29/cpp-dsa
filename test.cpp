#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    int n;
    cout<<"enter integer:";
    cin>>n;
    if((n/2)*2 == n) return true;
    else return false;
}
