// ["flower","flow","flight"] = fl
#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(vector<string>& strs){
    if(strs.empty()) return "";
    string pre= strs[0];
    for(string str:strs){
        while(str.find(pre)!=0){
            pre.pop_back();
            if(pre.empty()) return "";
        }
    }
    return pre;
}
int main(){
    vector<string> strs = {"flower","flow","flight"};
    cout<<longestCommonPrefix(strs);
}