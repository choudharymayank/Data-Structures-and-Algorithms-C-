#include<bits/stdc++.h>
using namespace std;

bool isSubsequence(string s1,string s2,int n,int m){
    if(n==0){
        return false;
    }
    if(m==0){
        return true;
    }
     
     if(s1[n-1]==s2[m-1]){
        return isSubsequence(s1,s2,n-1,m-1);
     }else{
        return isSubsequence(s1,s2,n-1,m);
     }
}

int main(){
string s1,s2;
cin>>s1>>s2;

int n=s1.size(),m=s2.size();
cout<<isSubsequence(s1,s2,n,m);

    return 0;
}