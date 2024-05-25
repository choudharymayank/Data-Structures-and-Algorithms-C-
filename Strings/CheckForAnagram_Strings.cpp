#include<bits/stdc++.h>
using namespace std;

const int CHAR=256;

bool isAnagram(string s1,string s2){
    int freq[CHAR]={0};
    if(s1.size()!=s2.size()){
        return false;
    }
    for(int i=0;i<s1.size();i++){
        freq[s1[i]]++;
        freq[s2[i]]--;
    }

    for(int i=0;i<CHAR;i++){
        if(freq[i]!=0){
            return false;
        }
    }
    return true;
}

int main(){
string s1,s2;
cin>>s1>>s2;

cout<<isAnagram(s1,s2);

    return 0;
}