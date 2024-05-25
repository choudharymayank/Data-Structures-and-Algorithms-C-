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

void rotateBy90(int matrix[n][m]){
    transpose(matrix);
    for(int i=0;i<m;i++){
        int k=0,p=n-1;
        while(k<p){
            swap(matrix[k][i],matrix[p][i]);
            k++;
            p--;
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