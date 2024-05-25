//We are given two binary Arrays of same size
#include<bits/stdc++.h>
using namespace std;

int longestSubarray(int arr[],int n,int sum){
      int res=0,pre_sum=0;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        pre_sum+=arr[i];
        if((pre_sum)==sum){
            res=i+1;
        }
        if(m.find(pre_sum-sum)!=m.end()){
            res=max(res,i- m[pre_sum-sum]);
        }else{
            m[pre_sum]=i;
        }
    }
    return res;
}

int main(){
int n;
cin>>n;

int a[n],b[n];
for(int i=0;i<n;i++){
    cin>>a[i]>>b[i];
}

for(int i=0;i<n;i++){
    a[i]-=b[i];
}

cout<<longestSubarray(a,n,0);

    return 0;
}