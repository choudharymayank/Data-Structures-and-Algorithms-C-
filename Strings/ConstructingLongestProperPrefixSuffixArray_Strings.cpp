#include<bits/stdc++.h>
using namespace std;

int longPropPreSuff(string str,int n){
   for(int len=n-1;len>0;len--){
        bool flag=true;
        for(int i=0;i<len;i++)
            if(str[i]!=str[n-len+i])
                flag=false;
                
        if(flag==true)
            return len;
    }
    return 0;
}

void fillLPS(string str,int lps[]){
    for(int i=0;i<str.size();i++){
         lps[i]=longPropPreSuff(str,i+1);
    }
}

int main(){
string str;
cin>>str;

int n=str.size();
int lps[n];

fillLPS(str,lps);

for(int i=0;i<n;i++){
    cout<<lps[i]<<" ";
}

    return 0;
}