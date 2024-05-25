#include<bits/stdc++.h>
using namespace std;

int LIS(int arr[],int n){
    int lis[n];
    lis[0]=1;

    for(int i=1;i<n;i++){
        lis[i]=1;
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]){
                lis[i]=max(lis[i],1 + lis[j]);
            }
        }
    }

    int res=1;

    for(int i=0;i<n;i++){
        res=max(res,lis[i]);
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

cout<<LIS(arr,n);

    return 0;
}