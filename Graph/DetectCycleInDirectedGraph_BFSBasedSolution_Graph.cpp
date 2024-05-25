//Using Kahns Algorithm
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v,int indegree[]){
adj[u].push_back(v);
indegree[v]++;
}

bool detectCycle(vector<int> adj[],int v,int indegree[]){
    queue<int> q;
    int count=0;
    for(int i=0;i<v;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }

    while(!q.empty()){
        int u=q.front();
        q.pop();
        count++;

        vector<int> p=adj[u];
        for(auto it: p){
            indegree[it]--;
            if(indegree[it]==0){
                q.push(it);
            }
        }
    }
    return (count!=v);
}

int main(){
int v;
cin>>v;

vector<int> adj[v];
int indegree[v];

for(int i=0;i<v;i++){
    indegree[i]=0;
}

addEdge(adj,0,1,indegree);
addEdge(adj,1,3,indegree);
addEdge(adj,2,3,indegree);
addEdge(adj,2,1,indegree);

cout<<detectCycle(adj,v,indegree);

    return 0;
}