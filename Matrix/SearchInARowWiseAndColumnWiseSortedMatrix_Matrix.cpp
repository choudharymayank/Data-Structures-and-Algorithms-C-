#include<bits/stdc++.h>
using namespace std;
#define n 4
#define m 4

void search(int matrix[n][m],int x){
int i=0,j=m-1;
while(i<n and j>=0){
    if(matrix[i][j]==x){
        cout<<i<<" "<<j;
        return;
    }else if(matrix[i][j]>x){
        j--;
    }else{
        i++;
    }
}
cout<<"Not Found"<<endl;
}

int main(){
int matrix[n][m];

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>matrix[i][j];
    }
}

int x;
cin>>x;

search(matrix,x);

    return 0;
}