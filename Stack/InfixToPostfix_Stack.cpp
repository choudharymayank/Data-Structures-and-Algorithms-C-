#include<bits/stdc++.h>
using namespace std;

int precedence(char c){
    if(c=='+' or c=='-'){
        return 1;
    }else if(c=='*' or c=='/'){
        return 2;
    }else if(c=='^'){
        return 3;
    }
    return -1;
}

void postfix(string str){
stack<char> st;
for(int i=0;i<str.size();i++){
    if(str[i]>='a' and str[i]<='z'){
        cout<<str[i];
    }
    else if(str[i]=='('){
        st.push(str[i]);
    }else if(str[i]==')'){
        while(!st.empty() and st.top()!='('){
            cout<<st.top();
            st.pop();
        }
        st.pop();
    }else{
        if(st.empty()){
            st.push(str[i]);
        }else{
            while(!st.empty() and precedence(str[i])<=precedence(st.top())){
                if (str[i] == '^' && st.top() == '^')
                    break;
                cout<<st.top();
                st.pop();
            }
            st.push(str[i]);
        }
    }
}

while(!st.empty()){
    cout<<st.top();
    st.pop();
}

}

int main(){
string str;
cin>>str;

postfix(str);

    return 0;
}