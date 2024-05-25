//Extension Of Moore's Upvoting Algorithm - Majority Element
// The Logic is that the elements with freq more than (n/k) can only be k-1 not more than that.

#include<bits/stdc++.h>
using namespace std;

void printNbyK(int arr[],int n,int k){
   unordered_map<int,int> m;
   for(int i=0;i<n;i++){
    if(m.find(arr[i])!=m.end() or m.size()<(k-1)){
        m[arr[i]]++;
    } 
    else{
        for(auto it: m){
            it.second--;
        }
    }
   }
   
   for(auto it: m){
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