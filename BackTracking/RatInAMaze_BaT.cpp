#include<bits/stdc++.h>
using namespace std;
#define n 4

bool isSafe(int maze[n][n],int i,int j){
    if(i<n and j<n and maze[i][j]==1){
        return true;
    }
    return false;
}

bool solveMazeRec(int maze[n][n],int print[n][n],int i,int j){
    if(i==n-1 and j==n-1){
        print[i][j]=1;
        return true;
    }
    if(isSafe(maze,i,j)){
        print[i][j]=1;
        if(solveMazeRec(maze,print,i+1,j)){
            return true;
        }
        if(solveMazeRec(maze,print,i,j+1)){
            return true;
        }
        print[i][j]=0;
    }
    return false;
}

bool solveMaze(int maze[n][n],int print[n][n]){
if(!solveMazeRec(maze,print,0,0)){
    return false;
}
return true;
}

int main(){
int maze[n][n];

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>maze[i][j];
    }
}

int print[n][n];

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        print[i][j]=0;
    }
}

if(solveMaze(maze,print)){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<print[i][j]<<" ";
        }
        cout<<endl;
    }
}else{
    cout<<"No Solution"<<endl;
}

    return 0;
}