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

void middleLL(Node* head){
    if(head==NULL){
        return;
    }

    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL and fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }

    cout<<slow->data<<endl;
    return;
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

middleLL(head);

    return 0;
}