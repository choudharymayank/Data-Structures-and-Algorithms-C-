#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int l,int h,int p){
int temp[h-l+1];
int k=0;
for(int i=l;i<=h;i++){
if(arr[i]<arr[p]){
temp[k]=arr[i];
k++;
}
}
for(int i=l;i<=h;i++){
    if(arr[i]==arr[p]){
      temp[k]=arr[i];
      k++;
    }
}
int res=l+k-1;
for(int i=l;i<=h;i++){
    if(arr[i]>arr[p]){
        temp[k]=arr[i];
        k++;
    }
}

for(int i=l;i<=h;i++){
    arr[i]=temp[i-l];
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

int pivot;
cin>>pivot;

cout<<partition(arr,0,n-1,pivot);

    return 0;
}