#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;

int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

priority_queue<int,vector<int>,greater<int>> pq(arr,arr+n);
pq.push(5);

while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
}

    return 0;
}