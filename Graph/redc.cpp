#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;

class Graph{
int V;
list<int> *l;
bool isUnDir;
public:
    Graph(int V, bool isUnDir=true){
        this->V=V;
        l = new list<int> [V];
        this->isUnDir = isUnDir;
    }
    void addEdge(int u, int v){
        l[u].push_back(v);
        if(isUnDir) l[v].push_back(u);
    }
    void print(){
        for(int u=0;u<V;u++){
            list<int> neighbor=l[u];
            cout<<u<<":";
            for(int v:neighbor){
                cout<<v;
            }
            cout<<endl;
        }
    }
    void bfsHelper(int src, vector<bool>& vis){
        vis[src]=true;
        queue<int>q;
        q.push(0);
        while(q.size()>0){
            int u=q.front(); q.pop();
            cout<< u <<" ";
            list<int> neighbor = l[u];
            for(int v:neighbor){
                if(!vis[v]){
                    vis[v]=true;
                    q.push(v);
                }
            }
            
        }
    }
    // void dfsHelper(int )
    void bfs(){
        vector<bool> vis(V,false);
        return bfsHelper(0,vis);
    }
    void dfsHelper(int src, vector<bool>& vis){
        vis[src]=true;
        cout<<src<<" ";
        list<int> neighbors = l[src];
        for(int v:neighbors){
            if(!vis[v]) dfsHelper(v, vis);
        }
    }
    void dfs(){
        vector<bool> vis(V, false);
        return dfsHelper(0, vis);
    }
    void pathHelper(int src, int dst, vector<bool>& vis, string& path){
        if(src==dst){
            cout<<path<<dst<<endl;
            return;
        }
        vis[src]=true;
        path += to_string(src);
        list<int> neighbors = l[src];
        for(int v:neighbors){
            if(!vis[v]){
                pathHelper(v, dst, vis, path);
            }
        }
        path = path.substr(0,path.size()-1);
        vis[src]=false;
    }
    void printPath(int src, int dst){
        vector<bool> vis(V, false);
        string path = "";
        pathHelper(src, dst, vis, path);
    }
};
int main(){
    Graph graph(6, false);
    graph.addEdge(0,3);
    graph.addEdge(2,3);
    graph.addEdge(3,1);
    graph.addEdge(4,0);
    graph.addEdge(4,1);
    graph.addEdge(5,0);
    graph.addEdge(5,2);
    graph.printPath(5,1);

    graph.dfs();
}