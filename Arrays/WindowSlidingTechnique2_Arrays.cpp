//Given an unsorted array of non-negative integers.Find if there is a subarray with given sum.
#include<bits/stdc++.h>
using namespace std;

bool isSum(int arr[],int n,int sum){
   int curr_sum=arr[0];
   int s=0;

   for(int e=1;e<n;e++){
    //clean previous Window
    while(curr_sum>sum and s<e-1){
        curr_sum-=arr[s];
        s++;
    }

    if(curr_sum==sum){
        return true;
    }
    if(e<n){
        curr_sum+=arr[e];
    }
   }
   return curr_sum==sum;
}

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int sum;
cin>>sum;

cout<<isSum(arr,n,sum);

    return 0;
}