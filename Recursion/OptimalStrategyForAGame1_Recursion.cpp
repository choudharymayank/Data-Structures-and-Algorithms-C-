#include<bits/stdc++.h>
using namespace std;

int getMax(int arr[],int i,int j){
    if(i+1==j){
        return max(arr[i],arr[j]);
    }

    return max(arr[i]+min(getMax(arr,i+2,j),getMax(arr,i+1,j-1)),arr[j]+min(getMax(arr,i+1,j-1),getMax(arr,i,j-2)));
}

int main(){
int n;
cin>>n;

int arr[n];

for(int i=0;i,n;i++){
    cin>>arr[i];
}

cout<<getMax(arr,0,n);

    return 0;
}