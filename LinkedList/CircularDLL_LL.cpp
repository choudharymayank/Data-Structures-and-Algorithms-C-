#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};

Node* insertAtBeg(Node* head,int x){
    Node* temp=new Node(x);

    if(head==NULL){
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }

    temp->prev=head->prev;
    temp->next=head;
    head->prev->next=temp;
    head->prev=temp;

    return temp;
}

void print(Node* head){
    if(head==NULL){
        return;
    }

    Node* curr=head;
    while(curr->next!=head){
        cout<<curr->data<<"->";
        curr=curr->next;
    }
    cout<<curr->data<<"->"<<"NULL"<<endl;
}

int main(){
Node* head=new Node(10);
Node* temp1=new Node(20);
Node* temp2=new Node(30);

head->next=temp1;
temp1->prev=head;

temp1->next=temp2;
temp2->prev=temp1;

temp2->next=head;
head->prev=temp2;

print(head);

head=insertAtBeg(head,50);
head=insertAtBeg(head,60);

print(head);

    return 0;
}