#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int temp[n];
set<int> s;
s.insert(arr[0]);
temp[0]=-1;
for(int i=1;i<n;i++)
{
    auto it = s.upper_bound(arr[i]);
    if(it!=s.end()){
    temp[i]=(*it);
}else{
    temp[i]=-1;
}
    s.insert(arr[i]);
}  

for(int i=0;i<n;i++){
    cout<<temp[i]<<" ";
}
  return 0;
}