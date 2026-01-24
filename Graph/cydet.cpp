#include<iostream>
#include<list>
#include<vector>
#include<queue>
using namespace std;

class Graph{
    int V;
    list<int>* l;
    bool isUndir;
public:
    Graph(int V, bool isUndir=true){
        this->V = V;
        l = new list<int> [V];
        this->isUndir = isUndir;
    }
    void addEdge(int u, int v){
        l[u].push_back(v);
        if(isUndir) l[v].push_back(u);
             
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
    bool isCycleUndHelper(int src, int par, vector<bool>& vis){
        vis[src]=true;
        list<int>neighbors = l[src];
        for(int v:neighbors){
            if(!vis[v]){
                if(isCycleUndHelper(v,src,vis)) return true;
            }else{                  //if neighb already visited and neih!= par === cycle
                if(v!=par) return true;
            }
        }
        return false;
    }
    bool isCycleUnd(){
        vector<bool>vis(V, false);
        return isCycleUndHelper(0,-1,vis);
    }
    bool isCycleDirHelper(int src, vector<bool>& vis, vector<bool>& recPath){
        vis[src]=true;
        recPath[src]=true;
        list<int>neighbors = l[src];
        for(int v:neighbors){
            if(!vis[v]){
                if(isCycleDirHelper(v, vis, recPath)) return true;
            }else{
                if(recPath[v]) return true;
            }
        }
        recPath[src]=false;
        return false;
    }
    bool isCycleDir(){
        vector<bool>vis(V, false);
        vector<bool>recPath(V, false);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(isCycleDirHelper(i, vis, recPath)) return true;
            }
        }
        return false;
    }
};
int main(){
    Graph graph(4,false);
    graph.addEdge(1,0);
    graph.addEdge(0,2);
    graph.addEdge(2,3);
    graph.addEdge(3,0);
    // graph.print();
    cout<<graph.isCycleDir()<<endl;
}