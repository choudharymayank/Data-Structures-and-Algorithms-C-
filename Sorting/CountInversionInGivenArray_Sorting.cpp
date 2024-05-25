#include<bits/stdc++.h>
using namespace std;

int countandmerge(int arr[],int low,int mid,int high){
    int n1=mid-low+1,n2=high-mid;
    int left[n1];
    int right[n2];
    int k=low;

    for(int i=0;i<n1;i++){
        left[i]=arr[k];
        k++;
    }
    for(int i=0;i<n2;i++){
        right[i]=arr[k];
        k++;
    }
    
    int p=low,i=0,j=0,res=0;

    while(i<n1 and j<n2){
        if(left[i]<=right[j]){
            arr[p]=left[i];
            i++;
            p++;
        }else{
            arr[p]=right[j];
            j++;
            p++;
            res+=(n1-i);
        }
    }
    
    while(i<n1){
        arr[p]=left[i];
        i++;
        p++;
    }

    while(j<n2){
        arr[p]=right[j];
        j++;
        p++;
    }
    return res;
}

int countInv(int arr[],int l,int r){
    int res=0;
     if(l<r){
        int m=l+(r-l)/2;
        res+=countInv(arr,l,m);
        res+=countInv(arr,m+1,r);
       res+=countandmerge(arr,l,m,r);
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

cout<<countInv(arr,0,n-1);

    return 0;
}