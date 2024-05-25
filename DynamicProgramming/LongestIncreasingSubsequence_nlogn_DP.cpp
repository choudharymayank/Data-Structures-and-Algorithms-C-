#include<bits/stdc++.h>
using namespace std;

int ceilIdx(int tail[],int s,int e,int x){
    while(s>e){
       int m=s+(e-s)/2;

       if(tail[m]>=x){
           e=m;
       }else{
          s=m+1;
       }
    }
    return e;
}

int LIS(int arr[],int n){
    int tail[n];
    tail[0]=arr[0];
    int len=1;

for(int i=1;i<n;i++){
    if(arr[i]>tail[len-1]){
        tail[len]=arr[i];
        len++;
    }
    else{
        int c=ceilIdx(tail,0,len-1,arr[i]);
        tail[c]=arr[i];
    }
}
return len;
}

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<LIS(arr,n);

    return 0;
}