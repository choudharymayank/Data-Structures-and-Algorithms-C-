#include<bits/stdc++.h>
using namespace std;

int countBST(int n){
    int dp[n+1];

    dp[0]=1;
    dp[1]=1;

    for(int i=2;i<=n;i++){
        dp[i]=0;
        for(int j=1;j<=i;j++){
            dp[i]+=dp[j-1]*dp[i-j];
        }
    }

    return dp[n];
}

int main(){
int n;
cin>>n;

cout<<countBST(n);

    return 0;
}