#include<bits/stdc++.h>
using namespace std;

const int CHAR=256;

int leftMostNR(string str){
    int count[CHAR];

    fill(count,count+CHAR,-1);
     
     int res=INT_MAX;

    for(int i=0;i<str.size();i++){
        if(count[str[i]]==-1){
             count[str[i]]=i;
        }else{
            count[str[i]]=-2;
        }
    }

    for(int i=0;i<CHAR;i++){
        if(count[i]>=0){
            res=min(res,count[i]);
        }
    }

    return (res==INT_MAX)?-1:res;
}

int main(){
string str;
cin>>str;

cout<<leftMostNR(str);

    return 0;
}