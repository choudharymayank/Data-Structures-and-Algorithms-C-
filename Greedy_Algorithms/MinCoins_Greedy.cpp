#include<bits/stdc++.h>
using namespace std;

int minCoins(int coins[],int n,int sum){
sort(coins,coins+n,greater<int>());
int res=0;
for(int i=0;i<n;i++){
    if(coins[i]<=sum){
        int c=sum/coins[i];

        res+=c;
        sum-=coins[i]*c;
    }
    if(sum==0){
        break;
    }
}

return res;
}

int main(){
int n;
cin>>n;

int coins[n];

for(int i=0;i<n;i++){
    cin>>coins[i];
}

int sum;
cin>>sum;

cout<<minCoins(coins,n,sum);

    return 0;
}