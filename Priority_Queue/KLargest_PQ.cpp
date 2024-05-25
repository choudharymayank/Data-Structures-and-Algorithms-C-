#include<bits/stdc++.h>
using namespace std;

void kLargest(int arr[],int n,int k){
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<k;i++){
        pq.push(arr[i]);
    }

    for(int i=k;i<n;i++){
        if(arr[i]>pq.top()){
            pq.pop();
            pq.push(arr[i]);
        }
    }

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}

int main(){
int n,k;
cin>>n>>k;

int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

kLargest(arr,n,k);

    return 0;
}