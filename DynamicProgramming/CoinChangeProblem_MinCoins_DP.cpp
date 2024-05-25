#include<bits/stdc++.h>
using namespace std;

int minCoins(int coins[],int n,int sum){
int dp[sum+1];

dp[0]=0;
for(int i=1;i<=sum;i++){
    dp[i]=INT_MAX;
}

for(int i=1;i<=sum;i++){
for(int j=0;j<n;j++){
    if(coins[j]<=i){
      int sub_res=dp[i-coins[j]];
      if(sub_res!=INT_MAX){
        dp[i]=min(dp[i],sub_res + 1);
      }
    }
}
}

return dp[sum];

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

cout<<minCoins(arr,n,sum);

    return 0;
}