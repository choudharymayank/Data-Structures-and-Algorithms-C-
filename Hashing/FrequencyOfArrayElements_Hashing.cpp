#include<bits/stdc++.h>
using namespace std;

void freq(int arr[],int n){
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    for(auto it:m){
        cout<<it.first<<" "<<it.second<<endl;
    }
}

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

freq(arr,n);

    return 0;
}