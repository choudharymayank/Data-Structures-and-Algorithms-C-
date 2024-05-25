#include<bits/stdc++.h>
using namespace std;

int intersection(int a[],int b[],int n,int m){
unordered_set<int> s(a,a+n);
int res=0;
for(int i=0;i<m;i++){
    if(s.find(b[i])!=s.end()){
         res++;
         s.erase(b[i]); 
    }
}
return res;
}

int main(){
int n,m;
cin>>n>>m;

int a[n],b[m];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=0;i<m;i++){
    cin>>b[i];
}

cout<<intersection(a,b,n,m);

    return 0;
}