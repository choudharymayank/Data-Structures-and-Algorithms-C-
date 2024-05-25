#include<bits/stdc++.h>
using namespace std;

int minOperations(string s1,string s2,int n,int m){
if(n==0){
    return m;
}
if(m==0){
    return n;
}

    if(s1[n-1]==s2[m-1]){
        return minOperations(s1,s2,n-1,m-1);
    }else{
        return min(1 + minOperations(s1,s2,n,m-1),min(1+minOperations(s1,s2,n-1,m),1 + minOperations(s1,s2,n-1,m-1)));
    }
}

int main(){
string s1,s2;
cin>>s1>>s2;

int n=s1.size();
int m=s2.size();

cout<<minOperations(s1,s2,n,m);

    return 0;
}