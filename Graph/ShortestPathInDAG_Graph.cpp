#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<pair<int,int>> adj[],int u,int v,int w){
    adj[u].push_back({v,w});

}

void DFSRec(vector<pair<int,int>> adj[],int v,bool visited[],stack<int> &st,int s){
    vector<pair<int,int>> p=adj[s];
    for(auto it: p){
        if(!visited[it.first]){
            visited[it.first]=true;
            DFSRec(adj,v,visited,st,it.first);
        }
    }

    st.push(s);
}

void topologicalSort(vector<pair<int,int>> adj[],int v,bool visited[],vector<int> &vi,stack<int> &st){
    for(int i=0;i<v;i++){
        visited[i]=false;
    }

    for(int i=0;i<v;i++){
        if(!visited[i]){
            visited[i]=true;
            DFSRec(adj,v,visited,st,i);
        }
    }

    while(!st.empty()){
        vi.push_back(st.top());
        st.pop();
    }
}

void shortestPath(vector<pair<int,int>> adj[],int v,vector<int> vi,int dist[]){
    for(int i=0;i<v;i++){
        vector<pair<int,int>> p= adj[vi[i]];
        for(auto it:p){
            if(dist[it.first]>dist[vi[i]] + it.second){
                dist[it.first]=dist[vi[i]] + it.second;
            }
        }
    }
}

int main(){
int v;
cin>>v;

vector<pair<int,int>> adj[v];
bool visited[v];
stack<int> st;
vector<int> vi;

addEdge(adj,0,1,2);
addEdge(adj,0,4,1);
addEdge(adj,1,2,3);
addEdge(adj,4,2,2);
addEdge(adj,2,3,6);
addEdge(adj,4,5,4);
addEdge(adj,5,3,1);

topologicalSort(adj,v,visited,vi,st);

int dist[v];
int s;
cin>>s;

for(int i=0;i<v;i++){
    dist[i]=INT_MAX;
}
dist[s]=0;

shortestPath(adj,v,vi,dist);

for(int i=0;i<v;i++){
    cout<<dist[i]<<" ";
}

    return 0;
}