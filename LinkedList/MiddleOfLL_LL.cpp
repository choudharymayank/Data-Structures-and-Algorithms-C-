#include<bits/stdc++.h>
using namespace std;

class Node{
public: 
int data;
Node* next;

Node(int x){
    data=x;
    next=NULL;
}
};

int middleLL(Node* head){
if(head==NULL){
    return -1;
}

int len=1;
Node* curr=head;
while(curr->next!=NULL){
    curr=curr->next;
    len++;
}

int middle;
if(len%2==0){
    middle=len/2;
}else{
    middle=(len+1)/2;
}

curr=head;
while(middle!=1){
curr=curr->next;
middle--;
}

return curr->data;
}

void print(Node* head){
    Node* curr=head;
    while(curr!=NULL){
        cout<<curr->data<<"->";
        curr=curr->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
Node* head=new Node(10);
head->next=new Node(20);
head->next->next=new Node(30);
head->next->next->next=new Node(40);

print(head);

cout<<middleLL(head);

    return 0;
}