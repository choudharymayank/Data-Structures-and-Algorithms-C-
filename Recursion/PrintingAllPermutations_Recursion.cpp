#include<bits/stdc++.h>
using namespace std;

void permute(string s,int i){
    if(i==s.size()-1){
        cout<<s<<" ";
        return;
    }

    for(int j=i;j<s.size();j++){
        swap(s[i],s[j]);
        permute(s,i+1);
        swap(s[j],s[i]);
    }
}

int main(){
    string s;
    cin>>s;

permute(s,0);

    return 0;
}