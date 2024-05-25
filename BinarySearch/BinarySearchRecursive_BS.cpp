#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int low,int high,int x){
if(low>high){
    return -1;
}
       int mid=low+(high-low)/2;
        if(arr[mid]==x){
            return mid;
        }else if(arr[mid]>x){
           return binarySearch(arr,low,mid-1,x);
        }else{
          return binarySearch(arr,mid+1,high,x);
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

cout<<binarySearch(arr,0,n-1,x);

    return 0;
}