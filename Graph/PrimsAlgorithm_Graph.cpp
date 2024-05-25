#include<bits/stdc++.h>
using namespace std;
#define v 4

int primsAlgo(int graph[v][v]){
    int key[v];
    bool mSet[v];

    int res=0;
    
    for(int i=0;i<v;i++){
        mSet[i]=false;
        key[i]=INT_MAX;
    }
    
    key[0]=0;
    for(int count=0;count<v;count++){
       int u=-1;
       for(int i=0;i<v;i++){
           if(!mSet[i] and (u==-1 or key[i]<key[u])){
               u=i;
           }
       }
       mSet[u]=true;
       res=res+key[u];

       for(int i=0;i<v;i++){
           if(graph[u][i]!=0 and !mSet[i]){
               key[i]=min(key[i],graph[u][i]);
           }
       }
    }
 
 return res;

}

int main(){
int graph[v][v];

for(int i=0;i<v;i++){
    for(int j=0;j<v;j++){
        cin>>graph[i][j];
    }
}

cout<<primsAlgo(graph);

    return 0;
}