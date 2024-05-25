#include<bits/stdc++.h>
using namespace std;

int countOnes(int arr[],int n){
int low=0,high=n-1;

while(low<=high){
    int mid=low+(high-low)/2;
    if(arr[mid]==1){
        if(arr[mid-1]!=arr[mid] or mid==0){
            return n-mid;
        }else{
            high=mid-1;
        }
    }else{
        low=mid+1;
    }
}
return 0;
}

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<countOnes(arr,n);

    return 0;
}