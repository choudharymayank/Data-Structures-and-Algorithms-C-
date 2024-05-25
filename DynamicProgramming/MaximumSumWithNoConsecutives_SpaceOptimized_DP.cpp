#include<bits/stdc++.h>
using namespace std;

int maxSum(int arr[],int n){
   if(n==1){
    return arr[0];
   }

    int prev_prev=arr[0];
    int prev=max(arr[0],arr[1]);
     int res=prev;
    for(int i=3;i<=n;i++){
       res=max(prev,prev_prev + arr[i-1]);
       prev_prev=prev;
       prev=res;
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