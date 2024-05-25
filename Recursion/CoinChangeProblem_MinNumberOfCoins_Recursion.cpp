#include<bits/stdc++.h>
using namespace std;

int minCoins(int coins[],int n,int sum){
    if(sum==0){
        return 0;
    }
    int res=INT_MAX;

    for(int i=0;i<n;i++){
        if(coins[i]<=sum){
            int sub_res=1 + minCoins(coins,n,sum-coins[i]);
            if(sub_res!=INT_MAX){
            res=min(res,sub_res);
            }
        }
    }
    return res;
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