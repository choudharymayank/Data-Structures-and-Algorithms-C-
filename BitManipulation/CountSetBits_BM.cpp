#include<bits/stdc++.h>
using namespace std;

int countSet(int n){
    int res=0;
    while(n>0){
    if((n & 1)==1){
        res++;
    }
    n>>1;
    }
    return res;
}

int main(){
int n;
cin>>n;

cout<<countSet(n);

    return 0;
}