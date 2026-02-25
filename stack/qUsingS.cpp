#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class MyQueue{
public:
stack<int>s1,s2;
    MyQueue(){};
    void addVal(int x){
        while(!s1.empty()){
            s2.push(s1.top()); s1.pop();
        }
        s1.push(x);
        while(!s2.empty()){
            s1.push(s2.top()); s2.pop();
        }
    }
    int pop(){
        int ans = s1.top();
        s1.pop();
        return ans;
    }
    int top(){
        return s1.top();
    }
};
int main(){
    MyQueue q;
    q.addVal(9);
    q.addVal(10);
    q.addVal(11);
    cout<<q.top(); q.pop();
    cout<<q.top(); q.pop();
    cout<<q.top(); q.pop();
}