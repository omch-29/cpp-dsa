//ODD AND EVEN NUMBERS:-
// if right-most bit = 1 = odd, if = 0 =even
// odd & 1 = 1, even & 1 = 0
#include <iostream>
#include <vector>
#include<cstring>
#include<unordered_map>
#include <climits>
using namespace std;
int main(){
    int n=11;
    if(!(n&1)) cout<<"even"<<endl; // checking if n & 1 == 0
    else cout<<"odd\n";
}