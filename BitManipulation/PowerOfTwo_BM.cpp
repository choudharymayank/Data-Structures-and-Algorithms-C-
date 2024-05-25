//Method 1 -> Use CountsetBits Logic and if the result is 1 then the number is a power of 2.

#include<bits/stdc++.h>
using namespace std;

bool isPow2(int n){
    if(n==0){
        return false;
    }

    return ((n & (n-1))==0);
}

int main(){
int n;
cin>>n;

cout<<isPow2(n);

    return 0;
}