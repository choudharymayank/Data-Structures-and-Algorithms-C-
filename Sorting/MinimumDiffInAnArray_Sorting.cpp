#include<bits/stdc++.h>
using namespace std;

int minDiff(int arr[],int n){
int min_diff=INT_MAX;

sort(arr,arr+n);

for(int i=1;i<n;i++){
min_diff=min(min_diff,arr[i]-arr[i-1]);
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

cout<<minDiff(arr,n);

    return 0;
}