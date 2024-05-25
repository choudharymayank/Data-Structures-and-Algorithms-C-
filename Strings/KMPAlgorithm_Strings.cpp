#include<bits/stdc++.h>
using namespace std;

void fillLPS(string pat,int lps[]){
    int n=pat.size();
    int len=0;
    lps[0]=0;
   int i=1;
   while(i<n){
      if(pat[i]==pat[len]){
        len++;
        lps[i]=len;
        i++;
      }else{
        if(len==0){
            lps[i]=0;
            i++;
        }else{
            len=lps[len-1];
        }
      }
   }
}

void KMP(string txt,string pat){
    int n=txt.size(),m=pat.size();
    int lps[m];

    fillLPS(pat,lps);

    int i=0,j=0;
    while(i<n){
        if(pat[j]==txt[i]){
            i++;
            j++;
        }
        if(j==m){
            cout<<i-j<<" ";
            j=lps[j-1];
        }
        else if(i<n and pat[j]!=txt[i]){
            if(j==0){
                i++;
            }else{
                j=lps[j-1];
            }
        }
    }

}

int main(){
string txt,pat;
cin>>txt>>pat;

KMP(txt,pat);

    return 0;
}