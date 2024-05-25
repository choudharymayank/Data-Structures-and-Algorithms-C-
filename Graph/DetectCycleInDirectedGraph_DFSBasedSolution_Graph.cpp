#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
}

bool DFSRec(vector<int> adj[],int v,bool visited[],bool recSt[],int s){
    recSt[s]=true;

    vector<int> p=adj[s];
    for(auto it : p){
        if(!visited[it]){
            visited[it]=true;
            recSt[it]=true;
            if(DFSRec(adj,v,visited,recSt,it)){
                return true;
            }
        }else if(visited[it]){
            if(recSt[it]){
                return true;
            }
        }
    }
    recSt[s]=false;
    return false;
}


bool detectCycle(vector<int> adj[],int v,bool visited[],bool recSt[]){
    for(int i=0;i<v;i++){
        visited[i]=false;
        recSt[i]=false;
    }

    for(int i=0;i<v;i++){
        if(!visited[i]){
            visited[i]=true;
            if(DFSRec(adj,v,visited,recSt,i)){
                return true;
            }
        }
    }
    return false;
}

int main(){
int v;
cin>>v;

vector<int>  adj[v];
bool visited[v];
bool recSt[v];

addEdge(adj,0,1);
addEdge(adj,1,3);
addEdge(adj,2,3);
addEdge(adj,2,1);

cout<<detectCycle(adj,v,visited,recSt);

    return 0;
}