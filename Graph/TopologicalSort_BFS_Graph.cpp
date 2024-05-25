//Kahns Algorithm
#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v,int indegree[]){
    adj[u].push_back(v);
    indegree[v]++;
}

void topologicalSort(vector<int> adj[],int indegree[],int v){
queue<int> q;
for(int i=0;i<v;i++){
if(indegree[i]==0){
    q.push(i);
}
}

while(!q.empty()){
    int u=q.front();
    q.pop();
    cout<<u<<" ";

    vector<int> p=adj[u];

    for(auto it: p){
        indegree[it]--;
        if(indegree[it]==0){
            q.push(it);
        }
    }
}

}

int main(){

int v;
cin>>v;

vector<int> adj[v];
int indegree[v];

for(int i=0;i<v;i++){
    indegree[i]=0;
}

addEdge(adj,0,2,indegree);
addEdge(adj,0,3,indegree);
addEdge(adj,1,3,indegree);
addEdge(adj,1,4,indegree);

topologicalSort(adj,indegree,v);

    return 0;
}