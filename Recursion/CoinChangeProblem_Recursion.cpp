#include<bits/stdc++.h>
using namespace std;

int countCombinations(int arr[],int n,int sum){
if(sum==0){
    return 1;
}

if(n==0){
    return 0;
}

int res=countCombinations(arr,n-1,sum);
if(arr[n-1]<=sum){
    res+=countCombinations(arr,n,sum-arr[n-1]);
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

int sum;
cin>>sum;

cout<<countCombinations(arr,n,sum);

    return 0;
}