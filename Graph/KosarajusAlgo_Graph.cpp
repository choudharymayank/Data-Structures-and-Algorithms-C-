#include<bits/stdc++.h>
using namespace std;
#define v 5

void DFSRec(int graph[v][v],stack<int> &st,bool visited[],int s){
    for(int i=0;i<v;i++){
        if(graph[s][i]!=0 and !visited[i]){
            visited[i]=true;
            DFSRec(graph,st,visited,i);
        }
    }

    st.push(s);
}

void topologicalSort(int graph[v][v],stack<int> &st,vector<int> &vi,bool visited[]){
for(int i=0;i<v;i++){
    visited[i]=false;
}

for(int i=0;i<v;i++){
    if(!visited[i]){
        visited[i]=true;
        DFSRec(graph,st,visited,i);
    }
}

while(!st.empty()){
    vi.push_back(st.top());
    st.pop();
}

}

void transpose(int graph[v][v]){
    for(int i=0;i<v;i++){
        for(int j=i+1;j<v;j++){
            swap(graph[i][j],graph[j][i]);
        }
    }
}

void DFSRRec(int graph[v][v],bool visited[],int s){
cout<<s<<" ";
for(int i=0;i<v;i++){
    if(graph[s][i]!=0 and !visited[i]){
        visited[i]=true;
        DFSRRec(graph,visited,i);
    }
}

}

void DFS(int graph[v][v],bool visited[],vector<int> vi){
    for(int i=0;i<v;i++){
        visited[i]=false;
    }

    for(int i=0;i<v;i++){
        if(!visited[vi[i]]){
            visited[vi[i]]=true;
            DFSRRec(graph,visited,vi[i]);
            cout<<endl;
        }
    }
}

int main(){
int graph[v][v];
bool visited[v];
stack<int> st;
vector<int> vi;

for(int i=0;i<v;i++){
    for(int j=0;j<v;j++){
        cin>>graph[i][j];
    }
}

topologicalSort(graph,st,vi,visited);

transpose(graph);

DFS(graph,visited,vi);

    return 0;
}