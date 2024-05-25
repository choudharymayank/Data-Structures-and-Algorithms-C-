#include<bits/stdc++.h>
using namespace std;

void kClosest(int arr[],int n,int k,int x){
    priority_queue<pair<int,int>> pq;
    for(int i=0;i<k;i++){
        pq.push({abs(x-arr[i]),arr[i]});
    }
      
    for(int i=k;i<n;i++){
        int diff=abs(x-arr[i]);
        if(pq.top().first>diff){
            pq.pop();
            pq.push({abs(x-arr[i]),arr[i]});
        }
    }

    /*for(int i=0;i<k;i++){
        cout<<pq.top().second<<" ";
        pq.pop();
    }*/

    while(!pq.empty()){
        cout<<pq.top().second<<" ";
        pq.pop();
    }
}

int main(){
int n,k,x;
cin>>n>>k>>x;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

kClosest(arr,n,k,x);

    return 0;
}