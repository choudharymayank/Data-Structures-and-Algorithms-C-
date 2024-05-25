#include<bits/stdc++.h>
using namespace std;

bool isMatching(char c1,char c2){
    if(c1=='{' and c2=='}'){
        return true;
    }else if(c1=='(' and c2==')'){
        return true;
    }else if(c1=='[' and c2==']'){
        return true;
    }

    return false;
}

bool isBalanced(string s){
    stack<char> st;
    int n=s.size();
    
    for(int i=0;i<n;i++){
        if(s[i]=='(' or s[i]=='{' or s[i]=='['){
            st.push(s[i]);
        }else{
            if(st.empty()){
                return false;
            }
            if(!isMatching(st.top(),s[i])){
                return false;
            }
            st.pop();
        }
    }

    if(!st.empty()){
        return false;
    }

    return true;
}

int main(){
string s;
cin>>s;

cout<<isBalanced(s);

    return 0;
}