#include<bits/stdc++.h>
using namespace std;

void generateNumbers(int n){
    queue<string> q;
      q.push("5");
      q.push("6");

      int count=0;
      while(!q.empty() and count<n){
         cout<<q.front()<<" ";
         string s=q.front();
         string s1=s;
         s+="5";
         s1+="6";
         q.pop();
         q.push(s);
         q.push(s1);
         count++;
      }
return;
}

int main(){
int n;
cin>>n;

generateNumbers(n);

    return 0;
}