#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[],int n){
    int dp[n+1];

    dp[0]=0;
    dp[1]=arr[0];
    dp[2]=max(arr[0],arr[1]);

    for(int i=3;i<=n;i++){
        dp[i]=0;
        dp[i]+=max(dp[i-1],arr[i-1]+dp[i-2]);
    }

    return dp[n];
}

int main(){
int n;
cin>>n;

int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<maxSum(arr,n);

    return 0;
}