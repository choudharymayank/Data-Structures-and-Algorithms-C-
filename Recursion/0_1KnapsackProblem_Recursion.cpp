#include<bits/stdc++.h>
using namespace std;

int maxVal(int w[],int v[],int n,int W){

if(n==0 or W==0){
    return 0;
}
        if(w[n-1]<=W){
            return max(maxVal(w,v,n-1,W), v[n-1] + maxVal(w,v,n-1,W-w[n-1]));
        }else{
            return maxVal(w,v,n-1,W);
        }
}

int main(){
int n;
cin>>n;

int w[n],v[n];

for(int i=0;i<n;i++){
    cin>>v[i]>>w[i];
}

int W;
cin>>W;

cout<<maxVal(w,v,n,W);

    return 0;
}