#include<bits/stdc++.h>
using namespace std;

void initialize(int table[]){
    table[0]=0;

    for(int i=1;i<256;i++){
        table[i]=(i & 1) + table[i/2];
    }
}

int main(){
int n;
cin>>n;

int table[256];

initialize(table);

int res=table[n & 0xff];
n=n>>8;

res+=table[n & 0xff];

n=n>>8;

res+=table[n & 0xff];

n=n>>8;

res+=table[n & 0xff];

cout<< res;

    return 0;
}