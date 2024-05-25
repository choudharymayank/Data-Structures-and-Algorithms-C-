#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string S,int s,int e){

    while(s<e){
        if(S[s]!=S[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int minCuts(string s,int i,int j){
if(isPalindrome(s,i,j)){
    return 0;
}
int res=INT_MAX;
for(int k=i;k<j;k++){
    res=min(res,1+minCuts(s,i,k)+minCuts(s,k+1,j));
}
return res;
}

int main(){
string s;
cin>>s;

cout<<minCuts(s,0,s.size()-1);

    return 0;
}