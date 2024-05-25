#include<bits/stdc++.h>
using namespace std;

void printNbyK(int arr[],int n,int k){
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }

    for(auto it:m){
        if(it.second>(n/k)){
            cout<<it.first<<" ";
        }
    }
}

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int k;
cin>>k;

printNbyK(arr,n,k);

    return 0;
}