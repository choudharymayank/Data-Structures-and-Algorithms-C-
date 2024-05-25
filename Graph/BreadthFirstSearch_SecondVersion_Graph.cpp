/* Source Vertex is not given and Graph may be disconnected */
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(v);
}

void BFS(vector<int> adj[],bool visited[],int v,int s){
     queue<int> q;
     visited[s]=true;
     q.push(s);

     while(!q.empty()){
         int u=q.front();
         q.pop();
         cout<<u<<" ";
         vector<int> p=adj[u];
         for(auto it:p){
             if(!visited[it]){
                 visited[it]=true;
                 q.push(it);
             }
         }
     }
}

void BFS_Dis(vector<int> adj[],bool visited[],int v){
    for(int i=0;i<v;i++){
        visited[i]=false;
    }

    for(int i=0;i<v;i++){
        if(!visited[i]){
            BFS(adj,visited,v,i);
        }
    }
}

int main(){
int v;
cin>>v;

vector<int> adj[v];
bool visited[v+1];

addEdge(adj,0,1);
addEdge(adj,0,2);
addEdge(adj,1,3);
addEdge(adj,2,3);
addEdge(adj,4,5);
addEdge(adj,4,6);
addEdge(adj,5,6);

BFS_Dis(adj,visited,v);



    return 0;
}