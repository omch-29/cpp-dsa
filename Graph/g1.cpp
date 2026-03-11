#include<bits/stdc++.h>
using namespace std;

class Graph{
    int V;
    list<int>* l;
    bool isUndir;
public:
    Graph(int vertex, bool isUndir=true){
        this->V = vertex;
        l = new list<int>[V];
        this->isUndir = isUndir;
    }
    void addEdge(int v, int u){
        l[u].push_back(v);
        if(isUndir) l[v].push_back(u);
    }
    // void bfsHelper(int src, vector<bool>& vis){
    //     vis[src]=true;
    //     queue<int>q;
    //     q.push(src);
    //     while(!q.empty()){
    //         int u = q.front(); q.pop();
    //         cout<<u<<" ";
    //         list<int> neighbor = l[u];
    //         for(int v:neighbor){
    //             if(!vis[v]){
    //                 vis[v]=true;
    //                 q.push(v);
    //             }
    //         }
    //     }
    // }
    // void bfs(){
    //     vector<bool>vis(V);
    //     return bfsHelper(0, vis);
    // }
    void dfsHelper(int src, vector<bool>& vis){
        vis[src]=true;
        cout<<src<<" ";
        list<int>neighbor = l[src];
        for(int v:neighbor){
            if(!vis[v]) dfsHelper(v,vis);
        }
    }
    void dfs(){
        vector<bool>vis(V);
        return dfsHelper(0,vis);
    }
};

int main(){
    Graph g1(6);
    g1.addEdge(0,2);
    g1.addEdge(0,1);
    g1.addEdge(2,4);
    g1.addEdge(1,3);
    g1.addEdge(3,5);
    g1.addEdge(4,5);
    
    g1.bfs();
    cout<<endl;
    g1.dfs();
}