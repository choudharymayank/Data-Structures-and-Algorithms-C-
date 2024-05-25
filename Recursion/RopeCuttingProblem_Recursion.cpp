#include<bits/stdc++.h>
using namespace std;

int maxCuts(int n,int a,int b,int c){
    if(n==0){
        return 0;
    }
    if(n<0){
        return -1;
    }
    int l1=maxCuts(n-a,a,b,c);
    int l2=maxCuts(n-b,a,b,c);
    int l3=maxCuts(n-c,a,b,c);

    int res= max(l1,max(l2,l3));
    if(res==-1){
        return -1;
    }else{
        return res+1;
    }
}

int main(){
int n;
cin>>n;

int a,b,c;
cin>>a>>b>>c;

cout<<maxCuts(n,a,b,c);

    return 0;
}