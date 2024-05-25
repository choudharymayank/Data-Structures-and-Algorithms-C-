#include<bits/stdc++.h>
using namespace std;

const int CHAR=256;

int leftMostR(string str){
    int count[CHAR];

    fill(count,count+CHAR,-1);
     
    int res=INT_MAX;

    for(int i=0;i<str.size();i++){
        if(count[str[i]]!=-1){
           res=min(res,count[str[i]]);
        }else{
            count[str[i]]=i;
        }
    }
     
return (res==INT_MAX)?-1:res;

}

int main(){
string str;
cin>>str;

cout<<leftMostR(str);

    return 0;
}