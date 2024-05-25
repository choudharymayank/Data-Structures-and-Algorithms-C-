#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void DFSRec(vector<int> adj[],bool visited[],int v,int s){
cout<<s<<" ";
vector<int> p=adj[s];
for(auto it: p){
    if(!visited[it]){
        visited[it]=true;
        DFSRec(adj,visited,v,it);
    }
}

}

void DFS(vector<int> adj[],bool visited[],int v){
   for(int i=0;i<v;i++){
       visited[i]=false;
   }

   for(int i=0;i<v;i++){
       if(!visited[i]){
           visited[i]=true;
           DFSRec(adj,visited,v,i);
       }
   }
}

int main(){
int v;
cin>>v;

vector<int> adj[v];
bool visited[v];

addEdge(adj,0,1);
addEdge(adj,2,3);
addEdge(adj,2,4);

DFS(adj,visited,v);

    return 0;
}