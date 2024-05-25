#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high){
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
    
    int p=low,i=0,j=0;

    while(i<n1 and j<n2){
        if(left[i]<=right[j]){
            arr[p]=left[i];
            i++;
            p++;
        }else{
            arr[p]=right[j];
            j++;
            p++;
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
}

void mergeSort(int arr[],int l,int r){
     if(l<r){
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
     }
}

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

mergeSort(arr,0,n-1);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}