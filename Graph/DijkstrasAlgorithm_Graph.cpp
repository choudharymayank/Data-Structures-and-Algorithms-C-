#include<bits/stdc++.h>
using namespace std;
#define v 4

void dijkstrasAlgo(int graph[v][v],int dist[],int s){
    bool fin[v];
    for(int i=0;i<v;i++){
        fin[i]=false;
        dist[i]=INT_MAX;
    }

    dist[s]=0;
    for(int count=0;count<v-1;count++){
        int u=-1;
        for(int i=0;i<v;i++){
            if(!fin[i] and (u==-1 or dist[i]<dist[u])){
                u=i;
            }
        }
    fin[u]=true;

    for(int i=0;i<v;i++){
        if(graph[u][i]!=0 and !fin[i]){
            dist[i]=min(dist[i],dist[u]+graph[u][i]);
        }
    }
}
}

int main(){
    
int graph[v][v];

for(int i=0;i<v;i++){
    for(int j=0;j<v;j++){
        cin>>graph[i][j];
    }
}
int s;
cin>>s;

int dist[v];

dijkstrasAlgo(graph,dist,s);

for(int i=0;i<v;i++){
cout<<dist[i]<<" ";
}


    return 0;
}