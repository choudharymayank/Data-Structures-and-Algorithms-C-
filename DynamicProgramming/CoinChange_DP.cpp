#include<bits/stdc++.h>
using namespace std;

int countCombinations(int arr[],int n,int sum){
    int dp[sum+1][n+1];
    for(int i=0;i<=sum;i++){
        dp[i][0]=0;
    }
    for(int j=0;j<=n;j++){
        dp[0][j]=1;
    }

    for(int i=1;i<=sum;i++){
        for(int j=1;j<=n;j++){
            dp[i][j]=dp[i][j-1];
            if(arr[j-1]<=i){
                dp[i][j]+=dp[i-arr[j-1]][j];
            }
        }
    }
    return dp[sum][n];
}

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int sum;
cin>>sum;

cout<<countCombinations(arr,n,sum);

    return 0;
}