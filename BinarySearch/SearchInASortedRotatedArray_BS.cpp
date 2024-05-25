#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
             return mid;
        }

        if(arr[low]<arr[mid]){
            if(x>=arr[low] and x<arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }else{
            if(x>arr[mid] and x<=arr[mid]){
                low=mid+1;
            }else{
                high=mid-1;
            }
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

cout<<binarySearch(arr,n,x);

    return 0;
}