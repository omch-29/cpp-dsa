#include <iostream>
#include <vector>
#include<cstring>
#include<unordered_map>
#include <climits>
using namespace std;
int main(){
    cout<<~(6)<<endl;
    //now,  -6 = 0000 0110, 1s C=1111 1001, here 1st 1=signBit=-ve, = 111 1001, now to find its magnitude.. we need to find 2's C
    //2's C=find 1s C then add 1, 1s C of 111 1001 = 000 0110 now +1 = 000 0111 = 7 and since signBit is -ve therefore its -7
}
