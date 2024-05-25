#include<bits/stdc++.h>
using namespace std;

int sum(int arr[],int b,int e){
    int s=0;
    for(int i=b;i<=e;i++){
        s+=arr[i];
    }
    return s;
}

int minPages(int arr[],int n,int k){
     if(k==1){
        return sum(arr,0,n-1);
        }
    if(n==1){
    return arr[0];
           }

         int res=INT_MAX;
         for(int i=1;i<n;i++){
         res=min(res,max(minPages(arr,i,k-1),sum(arr,i,n-1)));
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

int k;
cin>>k;

cout<<minPages(arr,n,k);

    return 0;
}