#include<iostream>
#include<list>
#include<queue>
#include<vector>
using namespace std;
class graph{
    int v;
    list<int> * l;
public:
    graph(int v){
        this->v = v;
        l = new list<int> [v];
    }

    void addEdge(int src,int dest,bool bider){
        l[src].push_back(dest);
        if(bider){
            l[dest].push_back(src);
        }
    }
    void bfsDriver(int src,vector<bool>& visited){
        queue<int>q;
        q.push(src);
        cout<<src<<" ";
        visited[src] = true;
        while(!q.empty()){
            int front = q.front();
            q.pop();
            list<int> :: iterator it;
            it = l[front].begin();
            while(it!=l[front].end()){
                int currVertex = *it;
                if(!visited[currVertex]){
                    cout<<currVertex<<" ";
                    visited[currVertex] = true;
                    q.push(currVertex);
                }
                it++;
            }
        }
        cout<<endl;
    }

    void bfs(){
        vector<bool> visited;
        for(int i=0;i<v;i++){
            visited.push_back(0);
        }
        for(int i=0;i<v;i++){
            if(!visited[i]){
                bfsDriver(i,visited);
            }
        }
    }
    void dfsDriver(int src,vector<bool>& visited){
        if(visited[src]){
            return;
        }
        cout<<src<<" ";
        visited[src] = true;
        list<int> :: iterator it;
        for(it = l[src].begin();it!=l[src].end();it++){
            dfsDriver(*it,visited);
        }
        return;
    }
    void dfs(){
        vector<bool> visited;
        for(int i=0;i<v;i++){
            visited.push_back(0);
        }
        for(int i=0;i<v;i++){
            if(!visited[i]){
                dfsDriver(i,visited);
            }
        }
        cout<<endl;
    }
    void shortestDist(int src){
        vector<bool>visited;
        vector<int>dist;
        queue<int>q;
        for(int i=0;i<v;i++){
            visited.push_back(false);
            dist.push_back(INT_MAX);
        }
        dist[src] = 0;
        visited[src] = true;
        q.push(src);
        while(!q.empty()){
            int front = q.front();
            q.pop();
            for(auto it = l[front].begin();it!=l[front].end();it++){
                int curr = *it;
                if(!visited[curr]){
                     dist[curr] = dist[front]+1;
                     visited[curr] = true;
                     q.push(curr);
                }
            }
        }
        for(int i=0;i<v;i++){
            cout<<dist[i]<<" ";
        }
        cout<<endl;
    }
    bool cycleDriver(int src,vector<bool>&visited,vector<bool>&inStack){
        if(visited[src] && inStack[src]){
            return true;
        }
        if(visited[src]){
            return false;
        }
        visited[src] = true;
        inStack[src] = true;
        auto it = l[src].begin();
        while(it!=l[src].end()){
            bool cycle = cycleDriver(*it,visited,inStack);
            if(cycle){
                return true;
            }
            it++;
        }
        inStack[src] = false;
        return false;
    }

    bool isCycle(){
        vector<bool>visited;
        vector<bool>inStack;
        for(int i=0;i<v;i++){
            visited.push_back(false);
            inStack.push_back(false);
        }
        for(int i=0;i<v;i++){
            if(!visited[i]){
                bool cycle = cycleDriver(i,visited,inStack);
                if(cycle){
                    return true;
                }
            }
        }
        return false;
    }

    void topoOrder(int src,vector<bool>&visited,stack<int>&s){
        if(visited[src]){
            return;
        }
        visited[src] = true;
        auto it = l[src].begin();
        while(it!=l[src].end()){
            topoOrder(*it,visited,s);
            it++;
        }
        s.push(src);
        return;
    }

    void print(){
        for(int i=0;i<v;i++){
            list<int> :: iterator it;
            it = l[i].begin();
            cout<<i<<" :: ";
            while(it!=l[i].end()){
                cout<<*it<<"-->";
                it++;
            }
            cout<<"NULL"<<endl;
        }
    }
};
int main(){
    graph g(7);
    g.addEdge(0,1,true);
    g.addEdge(0,2,true);
    g.addEdge(0,3,true);
    g.addEdge(1,4,true);
    g.addEdge(2,3,true);
    g.addEdge(2,4,true);
    g.addEdge(3,4,true);
    g.addEdge(5,6,true);
    g.shortestDist(0);
}
