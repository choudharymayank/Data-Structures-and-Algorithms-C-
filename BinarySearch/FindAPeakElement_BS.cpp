#include<bits/stdc++.h>
using namespace std;

int getPeak(int arr[],int n){
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;

        if((mid==0 or arr[mid]>=arr[mid-1]) and (mid==n-1 or arr[mid]>=arr[mid+1])){
            return arr[mid];
        }else if(mid>0 and arr[mid-1]>arr[mid]){
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
    return -1;
}

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<getPeak(arr,n);

    return 0;
}