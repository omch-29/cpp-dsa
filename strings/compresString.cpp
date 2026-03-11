#include<bits/stdc++.h>
using namespace std;

string sc2(string& s){
    string res;
    for(int i=0;i<s.size();){
        char ch = s[i];
        int cnt=0;
        while(i<s.size() && ch==s[i]){
            cnt++;
            i++;
        }
        res.push_back(ch);
        res+=to_string(cnt);
    }
    return res;
}


string sc(string& s){
    int cnt=1;
    string res;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]) cnt++;
        else{
            res.push_back(s[i-1]);
            res+=to_string(cnt);
            cnt=1;
        }
    }
    res.push_back(s[s.size()-1]);
    res+=to_string(cnt);
    return res;
}

string decode(string s){
    string res;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        int cnt = s[i+1]-'0';
        for(int j=0;j<cnt;j++) res.push_back(ch);

        i++;
    }
    return res;
}
string decode2(string s){
    string res;                                                                         //2 digit numbers
    for(int i=0;i<s.size();){
        char ch=s[i++];
        int cnt=0;
        while(i<s.size() && isdigit(s[i])){
            cnt = cnt*10 + (s[i]-'0');
            i++;
        }
        for(int j=0;j<cnt;j++) res.push_back(ch);
    }  
    return res;                                                                 
}

int main(){
    string str = "aaabbccc";
    cout<<sc(str)<<endl;
    cout<<sc2(str)<<endl;
    string str2 = "a3b2c3";
    cout<<decode(str2)<<endl;
    cout<<decode2(str2);
}