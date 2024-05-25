#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
      adj[u].push_back(v);
      adj[v].push_back(u);
}

void printAdjList(vector<int> adj[],int v){
    for(int i=0;i<v;i++){
        vector<int> p=adj[i];
        for(auto it:p){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}

int main(){
int v;
cin>>v;
vector<int> adj[v];

addEdge(adj,0,1);
addEdge(adj,0,2);
addEdge(adj,1,2);
addEdge(adj,1,3);

printAdjList(adj,v);


    return 0;
}