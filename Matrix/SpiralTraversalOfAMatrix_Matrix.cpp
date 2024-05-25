#include<bits/stdc++.h>
using namespace std;
#define n 4
#define m 4

void spiralTraversal(int matrix[n][m]){
    int top=0,bottom=n-1,left=0,right=m-1;

    while(top<=bottom and left<=right){
        for(int i=left;i<=right;i++){
            cout<<matrix[top][i]<<" ";
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<matrix[i][right]<<" ";
        }
        right--;
        if(top<=bottom){
        for(int i=right;i>=left;i--){
            cout<<matrix[bottom][i]<<" ";
        }
        bottom--;
        }
        if(left<=right){
        for(int i=bottom;i>=top;i--){
            cout<<matrix[i][left]<<" ";
        }
        left++;
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

spiralTraversal(matrix);

    return 0;
}