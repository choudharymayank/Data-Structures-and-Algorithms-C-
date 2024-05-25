#include<bits/stdc++.h>
using namespace std;

int LIS(int arr[],int n,int &prev){

if(n==1){
    return 1;
}

    if(prev==INT_MIN){
        int res1=LIS(arr,n-1,prev);
        prev=arr[n-1];
        int res2= 1 + LIS(arr,n-1,prev);
        return max(res1,res2);
    }
    else if(prev>arr[n-1]){
        prev=arr[n-1];
        return 1 + LIS(arr,n-1,prev);
    }else{
    return  LIS(arr,n-1,prev);
    }
}

int main(){
int n;
cin>>n;

int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

int prev=INT_MIN;

cout<<LIS(arr,n,prev);

    return 0;
}