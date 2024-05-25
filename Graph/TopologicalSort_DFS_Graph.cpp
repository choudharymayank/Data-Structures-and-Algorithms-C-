#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
}

void DFSRec(vector<int> adj[],int v,bool visited[],stack<int> &st,int s){
    vector<int> p=adj[s];
    for(auto it: p){
        if(!visited[it]){
            visited[it]=true;
            DFSRec(adj,v,visited,st,it);
        }
    }
    st.push(s);
}

void topologicalSort(vector<int> adj[],int v,bool visited[],stack<int> &st){
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
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
int v;
cin>>v;

vector<int> adj[v];
bool visited[v];
stack<int> st;

addEdge(adj,0,1);
addEdge(adj,1,3);
addEdge(adj,3,4);
addEdge(adj,2,3);
addEdge(adj,2,4);

topologicalSort(adj,v,visited,st);

    return 0;
}