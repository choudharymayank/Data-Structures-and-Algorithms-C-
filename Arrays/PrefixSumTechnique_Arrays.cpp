//Given an array of integers,find if it has an equilibrium point.

#include<bits/stdc++.h>
using namespace std;

bool eqPoint(int arr[],int n){
    int l_sum=0;
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    for(int i=0;i<n;i++){
        if(l_sum==sum-arr[i]){
            return true;
        }
        l_sum+=arr[i];
        sum-=arr[i];
    }
    return false;
}

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
      cin>>arr[i];
}

cout<<eqPoint(arr,n);

    return 0;
}