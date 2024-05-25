#include<bits/stdc++.h>
using namespace std;
#define n 4
#define m 4

void rotateBy90(int matrix[n][m]){
    int temp[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            temp[m-j-1][i]=matrix[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            matrix[i][j]=temp[i][j];
        }
    }
}

int main(){
int matrix[n][m];

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>matrix[i][j];
    }
}

rotateBy90(matrix);

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}