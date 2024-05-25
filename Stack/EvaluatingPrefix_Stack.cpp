#include<bits/stdc++.h>
using namespace std;

int calculate(int op1,int op2,char c){
if(c=='+'){
    return (op1 + op2);
}else if(c=='-'){
    return op1 - op2;
}else if(c=='*'){
    return op1 * op2;
}else if(c=='/'){
    return op1 / op2;
}else if(c=='^'){
    return pow(op1,op2);
}

return -1;
}

int evaluatePrefix(string str){
    stack<int> st;
    for(int i=str.size()-1;i>=0;i--){
        if(str[i]>='0' and str[i]<='9'){
            st.push(str[i]-'0');
        }else if(str[i]=='+' or str[i]=='-' or str[i]=='*' or str[i]=='/' or str[i]=='^'){
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();
            int x=calculate(op1,op2,str[i]);
            st.push(x);
        }
    }
    return st.top();
}

int main(){
string str;
cin>>str;

cout<<evaluatePrefix(str);

    return 0;
}