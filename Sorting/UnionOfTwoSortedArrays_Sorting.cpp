#include<bits/stdc++.h>
using namespace std;

void unionSorted(int a[],int b[],int n,int m){
    int i=0,j=0;

    while(i<n and j<m){
        if(i>0 and a[i]==a[i-1]){
            i++;
        }
        if(j>0 and b[j]==b[j-1]){
            j++;
        }
        if(a[i]<b[j]){
            cout<<a[i]<<" ";
            i++;
        }else if(a[i]>b[j]){
            cout<<b[j]<<" ";
            j++;
        }else{
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }

    while(i<n){
        if(i>0 and a[i]!=a[i-1]){
        cout<<a[i]<<" ";
        }
        i++;
    }
    while(j<m){
        if(j>0 and b[j]!=b[j-1]){
        cout<<b[j]<<" ";
        }
        j++;
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

unionSorted(a,b,n,m);

    return 0;
}