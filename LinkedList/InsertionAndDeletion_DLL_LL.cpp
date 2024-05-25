#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node* next;
Node* prev;

Node(int x){
    data=x;
    prev=NULL;
    next=NULL;
}
};

Node* insertAtBeg(Node* head,int x){
    Node* temp=new Node(x);

    if(head==NULL){
        return temp;
    }

    temp->next=head;
    head->prev=temp;

head=temp;

return temp;
}

Node* insertAtEnd(Node* head,int x){
    Node* temp=new Node(x);

    if(head==NULL){
        return temp;
    }

    Node* curr=head;

    while(curr->next!=NULL){
        curr=curr->next;
    }

    curr->next=temp;
    temp->prev=curr;

    return head;
}

Node* deleteAtBeg(Node* head){
    if(head==NULL){
        return NULL;
    }

    if(head->next==NULL){
         delete(head);
         return NULL;
    }

    Node* temp=head;
    head=head->next;
    head->prev=NULL;

    delete(temp);

    return head;
}

Node* deleteAtEnd(Node* head){
    if(head==NULL){
        return NULL;
    }

    if(head->next==NULL){
        delete(head);
        return NULL;
    }

    Node* curr=head;
    while(curr->next->next!=NULL){
       curr=curr->next;
    }

    Node* temp=curr->next;
    curr->next=NULL;

    delete(temp);

    return head;
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
Node* temp1=new Node(20);
Node* temp2=new Node(30);

head->next=temp1;
temp1->prev=head;

temp1->next=temp2;
temp2->prev=temp1;

print(head);

head=insertAtBeg(head,40);
head=insertAtBeg(head,50);

print(head);

head=insertAtEnd(head,60);
head=insertAtEnd(head,70);

print(head);

head=deleteAtBeg(head);
head=deleteAtEnd(head);

print(head);

    return 0;
}