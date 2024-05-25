#include<bits/stdc++.h>
using namespace std;

int maxVal(int w[],int v[],int n,int W){
int dp[n+1][W+1];
for(int i=0;i<=n;i++){
    for(int j=0;j<=W;j++){
        if(i==0 or j==0){
            dp[i][j]=0;
        }
    }
}

for(int i=1;i<=n;i++){
    for(int j=1;j<=W;j++){
        if(w[i-1]>j){
            dp[i][j]=dp[i-1][j];

        }else{
            dp[i][j]=max(dp[i-1][j],v[i-1] + dp[i-1][j-w[i-1]]);
        }
    }
}
return dp[n][W];
}

int main(){
int n;
cin>>n;

int w[n],v[n];

for(int i=0;i<n;i++){
    cin>>v[i]>>w[i];
}

int W;
cin>>W;

cout<<maxVal(w,v,n,W);

    return 0;
}