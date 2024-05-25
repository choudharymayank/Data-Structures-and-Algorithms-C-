#include<bits/stdc++.h>
using namespace std;

void leftRotate(int arr[],int n){
    int res=arr[0];

    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=res;
}

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

leftRotate(arr,n);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}