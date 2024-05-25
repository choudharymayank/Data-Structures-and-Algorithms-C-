//Given an array of integers and a number k,Find the max sum of k consecutive elements.
#include<bits/stdc++.h>
using namespace std;

int kConsecutive(int arr[],int n,int k){
int curr_sum=0;

for(int i=0;i<k;i++){
    curr_sum+=arr[i];
}

int res=INT_MIN;
res=max(res,curr_sum);

for(int i=k;i<n;i++){
curr_sum+=(arr[i]-arr[i-k]);
res=max(res,curr_sum);
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

cout<<kConsecutive(arr,n,k);

    return 0;
}