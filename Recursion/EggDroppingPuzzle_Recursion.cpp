#include<bits/stdc++.h>
using namespace std;

int maxTrials(int f,int e){
    if(e==1){
        return f;
    }
    if(f==1){
        return 1;
    }
    if(f==0){
       return 0;
    }


    int res=INT_MAX;
    for(int i=1;i<=f;i++){
       res=min(res,1+ max(maxTrials(i-1,e-1),maxTrials(f-i,e)));
    }

    return res;
}

int main(){
int e,f;
cin>>e>>f;

cout<<maxTrials(f,e);

    return 0;
}