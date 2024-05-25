#include<bits/stdc++.h>
using namespace std;
#define n 5

bool isSafe(int print[n][n],int row,int col){
    for(int i=0;i<col;i++){
        if(print[row][i]==1){
            return false;
        }
    }
    for(int i=row,j=col;i>=0 and j>=0;i--,j--){
        if(print[i][j]==1){
            return false;
        }
    }
    for(int i=row,j=col;j>=0 and i<n;i++,j--){
        if(print[i][j]==1){
            return false;
        }
    }
return true;
}

bool queenRec(int print[n][n],int col){
    if(col==n){
        return true;
    }
    for(int i=0;i<n;i++){
        if(isSafe(print,i,col)){
            print[i][col]=1;
            if(queenRec(print,col+1)){
                return true;
            }
            print[i][col]=0;
        }
    }
    return false;
}

bool queen(int print[n][n]){
    if(!queenRec(print,0)){
        return false;
    }
    return true;
}


int main(){
int print[n][n];

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        print[i][j]=0;
    }
}

if(queen(print)){
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