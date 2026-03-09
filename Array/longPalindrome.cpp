//return length of longest palindromw taht can be formed using given string
#include<bits/stdc++.h>
using namespace std;

int lp2(string s){
    unordered_set<char>st;
    int len=0;
    for(char c:s){
        if(st.count(c)){
            st.erase(c);
            len+=2;
        }else st.insert(c);
    }
    if(!st.empty()) len+=1;
    return len;
}


int lp(string s){
    unordered_map<char,int>freq;
    for(char c:s) freq[c]++;
    int len=0;
    bool isOdd=false;
    for(auto& it:freq){
        int cnt=it.second;
        if(cnt%2==0) len+=cnt;
        else{
             len+=(cnt-1);
             isOdd=true;
        }
    }
    if(isOdd) len+=1;
    return len;
}
int main(){
    cout<<lp("abccccdd")<<endl;;          //7
    cout<<lp("a")<<endl;
    cout<<lp2("abccccdd");
}