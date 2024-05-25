#include<bits/stdc++.h>
using namespace std;
#define n 4

bool isSafe(int grid[n][n],int i,int j,int N){
    for(int k=0;k<n;k++){
        if(grid[k][j]==N or grid[i][k]==N){
            return false;
        }
    }

    int s=sqrt(n);
    int rs=i-(i%s);
    int cs=j-(j%s);

    for(int p=0;p<s;p++){
        for(int q=0;q<s;q++){
            if(grid[p+rs][q+cs]==N){
                return false;
            }
        }
    }

    return true;
}

bool solve(int grid[n][n]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(grid[i][j]==0){
                break;
            }
        }
    }

    if(i==n and j==n){
        return true;
    }
    for(int N=1;N<=n;N++){
       if(isSafe(grid,i,j,N)){
          grid[i][j]=N;
          if(solve(grid)){
              return true;
          }
          grid[i][j]=0;
       }
    }
    return false;
}

int main(){
int grid[n][n];

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
       cin>>grid[i][j];
    }
}

if(solve(grid)){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
}else{
    cout<<"No Solution"<<endl;
}

    return 0;
}