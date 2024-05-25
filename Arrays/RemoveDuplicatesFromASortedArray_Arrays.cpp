#include<bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[],int n){

    int res=1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            res++;
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

cout<<removeDuplicates(arr,n);

    return 0;
}