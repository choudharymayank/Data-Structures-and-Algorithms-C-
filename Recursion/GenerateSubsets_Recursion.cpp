#include<bits/stdc++.h>
using namespace std;

void generateSubsets(string str,string curr,int i){
   if(i==str.size()){
       cout<<curr<<" ";
       return;
   }
   generateSubsets(str,curr,i+1);
   generateSubsets(str,curr+str[i],i+1);
}

int main(){
string str;
cin>>str;

string curr="";

generateSubsets(str,curr,0);

    return 0;
}