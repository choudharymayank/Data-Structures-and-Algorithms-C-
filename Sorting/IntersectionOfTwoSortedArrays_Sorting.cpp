#include<bits/stdc++.h>
using namespace std;

void intersectionSorted(int a[],int b[],int n,int m){
    int i=0,j=0;
    while(i<n and j<m){
        if(i>0 and a[i]==a[i-1]){
            i++;
        }
        if(a[i]==b[j]){
          cout<<a[i]<<" ";
          i++;
          j++;
        }    
        else if(a[i]<b[j]){
            i++;
        }else{
            j++;
        }
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

intersectionSorted(a,b,n,m);

    return 0;
}