#include<bits/stdc++.h>
using namespace std;

struct Node{
int data;
Node* next;

Node(int x){
    data=x;
    next=NULL;
}
};

struct MyStack{
Node* head;
int size;

MyStack(){
    head=NULL;
    size=0;
}

void push(int x){
   Node* temp=new Node(x);
   if(head==NULL){
      head=temp;
      size++;
      return;
   }
    temp->next=head;
    head=temp;
    size++;
}

int pop(){
    if(head==NULL){
        cout<<"Stack Underflow"<<endl;
        return -1;
    }
    int res=head->data;
    Node* temp=head;
    head=head->next;
    delete(temp);
    size--;

    return res;
}

int peek(){
    if(head==NULL){
        cout<<"No Element in Stack"<<endl;
        return -1;
    }
    return head->data;
}

bool isEmpty(){
    return head==NULL;
}

int isSize(){
    return size;
}

};

int main(){
MyStack st;
st.push(5);
st.push(10);
st.push(15);
cout<<st.pop()<<endl;
cout<<st.pop()<<endl;
cout<<st.pop()<<endl;
cout<<st.peek()<<endl;
st.push(5);
st.push(10);
st.push(15);
st.push(20);
st.push(25);
st.push(50);
cout<<st.isSize()<<endl;
cout<<st.peek()<<endl;
cout<<st.pop()<<endl;
cout<<st.peek()<<endl;

    return 0;
}