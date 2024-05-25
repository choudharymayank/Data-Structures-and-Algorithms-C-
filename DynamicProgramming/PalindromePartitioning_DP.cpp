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

int minCuts(string s){
int n=s.size();
int dp[n][n];

for(int i=0;i<n;i++){
    dp[i][i]=0;
}

for(int gap=1;gap<n;gap++){
    for(int i=0;i+gap<n;i++){
        int j=i+gap;
        dp[i][j]=INT_MAX;
        for(int k=i;k<j;k++){
            if(isPalindrome(s,i,j)){
                dp[i][j]=0;
            }
            else{
                dp[i][j]=min(dp[i][j],1+ dp[i][k] + dp[k+1][j]);
            }
        }
    }
}
return dp[0][n-1];
}

int main(){
string s;
cin>>s;

cout<<minCuts(s);

    return 0;
}