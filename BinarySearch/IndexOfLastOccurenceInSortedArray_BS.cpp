#include<bits/stdc++.h>
using namespace std;

int lastOcc(int arr[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            if(mid==n-1 or arr[mid+1]!=arr[mid]){
                return mid;
            }else{
                low=mid+1;
            }
        }else if(arr[mid]>x){
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

int x;
cin>>x;

cout<<lastOcc(arr,n,x);

    return 0;
}