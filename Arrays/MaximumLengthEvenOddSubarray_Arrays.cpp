#include<bits/stdc++.h>
using namespace std;

int maxLength(int arr[],int n){
    int res=1;
    int maxLen=1;
    for(int i=1;i<n;i++){
        if(arr[i-1]%2==0 and arr[i]%2!=0 or arr[i-1]%2!=0 and arr[i]%2==0){
            maxLen++;
            res=max(res,maxLen);
        }else{
            maxLen=1;
        }
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

cout<<maxLength(arr,n);

    return 0;
}