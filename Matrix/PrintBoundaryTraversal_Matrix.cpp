#include<bits/stdc++.h>
using namespace std;
#define n 4
#define m 4

void boundaryTraversal(int matrix[n][m]){
int left=0,right=m-1,top=0,bottom=n-1;

if(n==1){
    for(int i=0;i<m;i++){
        cout<<matrix[0][i]<<" ";
    }
    return;
}

if(m==1){
    for(int i=0;i<n;i++){
        cout<<matrix[i][0]<<" ";
    }
    return;
}

for(int i=left;i<=right;i++){
    cout<<matrix[0][i]<<" ";
}
for(int i=top+1;i<=bottom;i++){
    cout<<matrix[i][m-1]<<" ";
}

for(int i=right-1;i>=left;i--){
    cout<<matrix[n-1][i]<<" ";
}

for(int i=bottom-1;i>=top+1;i--){
    cout<<matrix[i][0]<<" ";
}

}

int main(){

int matrix[n][m];

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>matrix[i][j];
    }
}

boundaryTraversal(matrix);

    return 0;
}