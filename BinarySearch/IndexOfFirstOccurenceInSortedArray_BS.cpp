#include<bits/stdc++.h>
using namespace std;

int firstOcc(int arr[],int low,int high,int x){
    if(low>high){
        return -1;
    }
    int mid=low+(high-low)/2;
    if(arr[mid]==x){
        if(mid==0 or arr[mid-1]!=arr[mid]){
            return mid;
        }else{
            return firstOcc(arr,low,mid-1,x);
        }
    }else if(arr[mid]>x){
        return firstOcc(arr,low,mid-1,x);
    }else{
        return firstOcc(arr,mid+1,high,x);
    }
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

cout<<firstOcc(arr,0,n-1,x);

    return 0;
}