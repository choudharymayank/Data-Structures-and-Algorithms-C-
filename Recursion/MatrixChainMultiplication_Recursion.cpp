#include<bits/stdc++.h>
using namespace std;

int minOperations(int arr[],int i,int j){
    if(i+1==j){
        return 0;
    }

    int res=INT_MAX;
    for(int k=i+1;k<j;k++){
       res=min(res,minOperations(arr,i,k) + minOperations(arr,k,j) + arr[i]*arr[j]*arr[k]);
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

cout<<minOperations(arr,0,n-1);

    return 0;
}