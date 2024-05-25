//Given n ranges, find the maximum appearing element in the ranges.

#include<bits/stdc++.h>
using namespace std;

int maxAppearing(int l[],int r[],int n){
    vector<int> arr(1000);
    for(int i=0;i<n;i++){
        arr[l[i]]++;
        arr[r[i]+1]--;
    }
    int maxm=arr[0];
    int max_index=0;
    for(int i=1;i<1000;i++){
         arr[i]+=arr[i-1];
         if(maxm<arr[i]){
            maxm=arr[i];
            max_index=i;
         }
         
    }
return max_index;
}

int main(){
int n;
cin>>n;

int l[n],r[n];
for(int i=0;i<n;i++){
    cin>>l[i]>>r[i];
}

cout<<maxAppearing(l,r,n);

    return 0;
}