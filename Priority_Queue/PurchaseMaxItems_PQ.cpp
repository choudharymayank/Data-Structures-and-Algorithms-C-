#include<bits/stdc++.h>
using namespace std;

int purchaseMax(int arr[],int n,int sum){
    priority_queue<int,vector<int>,greater<int>> pq;

    for(int i=0;i<n;i++){
        pq.push(arr[i]);
    }

    int res=0;
    while(!pq.empty() and sum!=0){
        if(pq.top()<sum){
            res++;
            sum-=pq.top();
            pq.pop();
        }else{
            return res;
        }
    }
}

int main(){
int n,sum;
cin>>n>>sum;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<purchaseMax(arr,n,sum);

    return 0;
}