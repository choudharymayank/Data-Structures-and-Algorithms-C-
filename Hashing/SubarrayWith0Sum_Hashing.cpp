#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[],int n){
     for(int i=1;i<n;i++){
        arr[i]=arr[i-1]+arr[i];
     }
     unordered_set<int> s;
     for(int i=0;i<n;i++){
        if(arr[i]==0){
            return true;
        }
        if(s.find(arr[i])!=s.end()){
            return true;
        }else{
            s.insert(arr[i]);
        }
     }
     return false;
}

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<isPresent(arr,n);

    return 0;
}