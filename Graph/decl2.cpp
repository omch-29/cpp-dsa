#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;

class Graph{
int V;
list<int> *l;
bool isUndir;
public:
    Graph(int V, bool isUndir=true){
        this->V=V;
        l = new list<int> [V];
        this->isUndir = isUndir;
    }
    void addEdge(int u, int v){
        l[u].push_back(v);
        if(isUndir) l[v].push_back(u);
    }
    void print(){
        for(int u=0;u<V;u++){
            list<int> neighbor = l[u];
            cout<< u <<": ";
            for(int v:neighbor){
                cout<<v<<" ";
            }
            cout<<endl;
        }
    }
    void bfsHelper(int src, vector<bool>& vis){
        vis[src]=true;
        queue<int>q;
        q.push(0);
    }
    void bfs(){
        vector<bool> vis(V);
        return bfsHelper(0,vis);
    }
};
int main(){
    Graph g1(5);
    g1.addEdge(0,1);
    g1.addEdge(0,2);
    g1.addEdge(1,3);
    g1.addEdge(2,4);
    g1.addEdge(3,4);
    g1.print();
}