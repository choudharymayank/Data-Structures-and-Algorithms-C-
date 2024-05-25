#include<bits/stdc++.h>
using namespace std;

int countBST(int n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 1;
    }
    int res=0;
    for(int i=1;i<=n;i++){
        res+=countBST(n-i)*countBST(i-1);
    }

    return res;
}

int main(){
int n;
cin>>n;

cout<<countBST(n);

    return 0;
}