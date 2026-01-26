#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;

class Graph{
    int V;
    list<int>* l;
public:
    Graph(int V){
        this->V = V;
        l = new list<int> [V];
    }
    void addEdge(int u, int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }
    void print(){
        for(int u=0;u<V;u++){
            list<int> neighbors = l[u];
            cout<<u << ": ";
            for(int v:neighbors){
                cout<<v<<" ";
            }
            cout<<endl;
        }
    }
    void bfs(){
        queue<int>q;
        vector<bool>vis(V, false);
        q.push(0);
        vis[0]=true;
        while(q.size()>0){
            int u = q.front(); q.pop();
            cout<< u <<" ";
            list<int> neighbors = l[u];
            for(int v:neighbors){
                if(!vis[v]){
                    vis[v]=true;
                    q.push(v);
                }
            }
        }
    }
    void dfsHelper(int u, vector<bool>& vis){
        vis[u]=true;
        cout<< u <<" ";
        list<int>neighbors = l[u];
        for(int v:neighbors){
            if(!vis[v]) dfsHelper(v, vis);
        }
    }
    void dfs(){
        vector<bool> vis(V, false);
        return dfsHelper(0, vis);
    }
    bool isBipartite(){
        queue<int>q;
        vector<bool> vis(V, false);
        vector<int> color(V, -1);
        q.push(0);
        color[0]=0;
        while(q.size()>0){
            int curr = q.front();
            q.pop();
            list<int> neighbors = l[curr];
            for(int v:neighbors){
                if(!vis[v]){
                    vis[v]=true;
                    color[v]=!color[curr];
                    q.push(v);
                }else{
                    if(color[v] == color[curr]) return false;
                }
            }
        }
        return true;
    }
};
int main(){
    Graph graph(4);
    graph.addEdge(0,1);
    graph.addEdge(0,2);
    graph.addEdge(0,3);
    graph.addEdge(1,3);
    graph.addEdge(2,3);
    // graph.print();
    cout<<graph.isBipartite()<<endl;
}