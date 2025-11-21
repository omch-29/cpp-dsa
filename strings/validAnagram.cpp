#include <iostream>
#include <vector>
#include<cstring>
#include <climits>
using namespace std;
bool ana(string s1, string s2){
    if(s1.length()!=s2.length()) return false;
    int count[26]={0};
    for(int i=0;i<s1.length();i++){
        int idx=s1[i]-'a';
        count[idx]++;
    }
    for(int i=0;i<s2.length();i++){
        int idx=s2[i]-'a';
        if(count[idx]==0) return false;
        count[idx]--;
    }
    return true;
}
int main(){
    string s1="hey";
    string s2="yoh";
    cout<<ana(s1,s2);
}