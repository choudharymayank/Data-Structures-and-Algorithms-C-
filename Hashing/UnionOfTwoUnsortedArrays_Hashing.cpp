#include<bits/stdc++.h>
using namespace std;

void Union(int a[],int b[],int n,int m){
    unordered_set<int> s(a,a+n);
    for(int i=0;i<m;i++){
            s.insert(b[i]);
    }
    
    for(auto it:s){
        cout<<it<<" ";
    }

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

Union(a,b,n,m);

    return 0;
}