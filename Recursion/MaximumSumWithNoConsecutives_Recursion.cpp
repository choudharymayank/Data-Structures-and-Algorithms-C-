#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[],int n){
if(n==1){
    return arr[0];
}
if(n==2){
    return max(arr[0],arr[1]);
}
    int res=0;
    res+=max(maxSum(arr,n-1),maxSum(arr,n-2) + arr[n-1]);

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