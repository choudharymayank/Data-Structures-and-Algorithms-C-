#include<bits/stdc++.h>
using namespace std;

int minDiff(int arr[],int n,int m){
    if(m>n){
        return -1;
    }

    sort(arr,arr+n);
    int min_diff=arr[m-1]-arr[0];

    for(int i=m;(i+m-1)<n;i++){
        min_diff=min(min_diff,arr[i+m-1]-arr[i]);
    }
    return min_diff;
}

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int m;
cin>>m;

cout<<minDiff(arr,n,m);

    return 0;
}