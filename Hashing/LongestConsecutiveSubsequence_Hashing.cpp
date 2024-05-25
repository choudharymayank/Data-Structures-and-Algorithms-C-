#include<bits/stdc++.h>
using namespace std;

int longestSub(int arr[],int n){
      unordered_set<int> s(arr,arr+n);
      int res=1;

      for(auto it: s){
        if(s.find(it-1)==s.end()){
            int curr=1;
            while(s.find(it+curr)!=s.end()){
                curr++;
            }
            res=max(res,curr);
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

cout<<longestSub(arr,n);

    return 0;
}