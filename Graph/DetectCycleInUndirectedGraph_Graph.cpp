#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

bool DFS(vector<int> adj[],int v,bool visited[],int parent,int s){
vector<int> p=adj[s];
for(auto it: p){
    if(!visited[it]){
        visited[it]=true;
        if(DFS(adj,v,visited,s,it)){
            return true;
        }
    }
    else if(it!=parent){
        return true;
    }
}
return false;
}

bool detectCycle(vector<int> adj[],int v,bool visited[]){
for(int i=0;i<v;i++){
    if(!visited[i]){
        visited[i]=true;
       if(DFS(adj,v,visited,-1,i)){
           return true;
       }
    }
}
return false;
}

int main(){
int v;
cin>>v;

vector<int> adj[v];

bool visited[v];

for(int i=0;i<v;i++){
    visited[i]=false;
}

addEdge(adj,0,1);
addEdge(adj,0,2);
addEdge(adj,1,2);
addEdge(adj,2,3);

cout<<detectCycle(adj,v,visited);

    return 0;
}