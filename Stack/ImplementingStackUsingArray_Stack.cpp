#include<bits/stdc++.h>
using namespace std;

struct MyStack{
int *arr;
int capacity;
int top;

MyStack(int c){
    arr=new int[c];
    capacity=c;
    top=-1;
}


void push(int x){
    if(top==capacity-1){
        cout<<"Stack Overflow"<<endl;
        return;
    }
    top++;
    arr[top]=x;
}

void pop(){
    if(top==-1){
        cout<<"Stack Underflow"<<endl;
        return;
    }

    top--;
}

int isSize(){
    return (top+1);
}

bool isEmpty(){
    if(top==-1){
        return false;
    }
    return true;
}

int peek(){
    if(top==-1){
        return -1;
    }
    return arr[top];
}
};


int main(){
MyStack st(5);
st.push(5);
st.push(10);
st.push(15);
st.pop();
st.pop();
st.pop();
st.pop();
st.push(5);
st.push(10);
st.push(15);
st.push(20);
st.push(25);
st.push(50);
cout<<st.isSize()<<endl;
cout<<st.peek()<<endl;
st.pop();
cout<<st.peek()<<endl;

    return 0;
}