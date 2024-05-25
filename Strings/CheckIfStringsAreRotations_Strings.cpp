#include<bits/stdc++.h>
using namespace std;

bool check(string s1,string s2){
    s1+=s1;

    if(s1.find(s2)!=string::npos){
        return true;
    }
return false;
}

int main(){
string s1,s2;
cin>>s1;
cin>>s2;

cout<<check(s1,s2);

    return 0;
}