#include<bits/stdc++.h>
using namespace std;
#define n 4
#define m 4

void transpose(int matrix[n][m]){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<m;j++){
                swap(matrix[i][j],matrix[j][i]);
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

transpose(matrix);

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}