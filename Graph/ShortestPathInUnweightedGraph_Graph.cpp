#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void shortest_Path(vector<int> adj[],bool visited[],int dist[],int v,int s){
    for(int i=0;i<v;i++){
        visited[i]=false;
        dist[i]=INT_MAX;
    }

    dist[s]=0;
    
    queue<int> q;
    visited[s]=true;
    q.push(s);

    while(!q.empty()){
        int u=q.front();
        q.pop();

        vector<int> p=adj[u];
        for(auto it: p){
            if(!visited[it]){
                visited[it]=true;
                dist[it]=dist[u]+1;
                q.push(it);
            }
        }
    }
}

int main(){
int v;
cin>>v;

vector<int> adj[v];
bool visited[v];
int dist[v];

addEdge(adj,0,1);
addEdge(adj,0,2);
addEdge(adj,1,2);
addEdge(adj,2,3);

shortest_Path(adj,visited,dist,v,0);

for(int i=0;i<v;i++){
    if(dist[i]!=INT_MAX){
        cout<<dist[i]<<" ";
    }else{
        cout<<"INT_MAX"<<" ";
    }
}

cout<<endl;


    return 0;
}