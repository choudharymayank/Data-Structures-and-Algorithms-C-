#include<bits/stdc++.h>
using namespace std;

void search(string txt,string pat){
    int n=txt.size(),m=pat.size();

    for(int i=0;(i+m-1)<n; ){
       int j;
       for(j=0;j<m;j++){
        if(pat[j]!=txt[i+j]){
            break;
        }
       }
       if(j==m){
        cout<<i<<" ";
       }
       if(j==0){
        i++;
       }else{
        i=i+j;
       }
    }
}

int main(){
string txt,pat;
cin>>txt;
cin>>pat;

search(txt,pat);

    return 0;
}