#include<bits/stdc++.h>
using namespace std;
#define n 4
#define m 4

void printSnake(int matrix[n][m]){
int count=1;

for(int i=0;i<n;i++){
    if(count%2!=0){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
    }else{
        for(int j=m-1;j>=0;j--){
            cout<<matrix[i][j]<<" ";
        }
    }
    count++;
}

}

int main(){
int matrix[n][m];

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>matrix[i][j];
    }
}

printSnake(matrix);

    return 0;
}