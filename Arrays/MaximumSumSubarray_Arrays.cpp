#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[],int n){
    int res=INT_MIN;
int maxEnding=arr[0];
for(int i=1;i<n;i++){
    maxEnding=max(arr[i],maxEnding+arr[i]);
    res=max(res,maxEnding);
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

cout<<maxSum(arr,n);

    return 0;
}