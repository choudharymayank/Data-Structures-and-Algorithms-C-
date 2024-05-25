#include<bits/stdc++.h>
using namespace std;

const int CHAR=256;

int leftMostR(string str){
int count[CHAR]={0};

for(int i=0;i<str.size();i++){
    count[str[i]]++;
}

for(int i=0;i<str.size();i++){
    if(count[str[i]]>1){
        return i;
    }
}
return -1;
}

int main(){
string str;
cin>>str;

cout<<leftMostR(str);

    return 0;
}