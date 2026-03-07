#include <iostream>
#include <vector>
#include<cstring>
#include<stack>
#include <climits>
#include<algorithm>
using namespace std;

string removeDuplicates(string s){
    string res;
    for(char c:s){
        if(!res.empty() && res.back()==c) res.pop_back();
        else res.push_back(c);
    }
    return res;
}
string removeDuplicates2(string s){
    stack<char>st;
    for(char c:s){
        if(!st.empty() && st.top()==c) st.pop();
        else st.push(c);
    }
    string res;
    while(!st.empty()){

     res.push_back(st.top()); st.pop();
    }
    reverse(res.begin(), res.end());
    return res;
}
int main(){
    cout<<removeDuplicates("azxxzy")<<endl;
    cout<<removeDuplicates("abbaca");
}