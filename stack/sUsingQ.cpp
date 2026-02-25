#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class MyStack{
public:
queue<int>q1,q2;
    MyStack(){}
    void addVal(int x){
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front()); q2.pop();
        }
    }
    int pop(){
        int ans=q1.front();
        q1.pop();
        return ans;
    }
    int top(){
        return q1.front();
    }
};

int main(){
    MyStack s;
    s.addVal(1);
    s.addVal(2);
    s.addVal(3);
    cout<<s.pop();
    cout<<s.pop();
    cout<<s.pop();
}