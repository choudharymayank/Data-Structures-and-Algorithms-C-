/* Source Vertex is given */
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void BFS(vector<int> adj[],int v,int s){
bool visited[v+1];
for(int i=0;i<v;i++){
    visited[i]=false;
}

queue<int> q;
visited[s]=true;
q.push(s);

while(!q.empty()){
    int u=q.front();
    q.pop();
    cout<<u<<" ";

    vector<int> p=adj[u];
    for(auto it: p){
        if(!visited[it]){
            visited[it]=true;
            q.push(it);
        }
    }
}

}

int main(){
int v;
cin>>v;

vector<int> adj[v];

addEdge(adj,0,1);
addEdge(adj,0,2);
addEdge(adj,0,5);
addEdge(adj,1,3);
addEdge(adj,2,4);
addEdge(adj,3,5);
addEdge(adj,4,5);

BFS(adj,v,0);

    return 0;
}