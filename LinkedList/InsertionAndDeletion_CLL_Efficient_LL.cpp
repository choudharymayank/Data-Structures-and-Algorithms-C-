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

Node* insertAtBeg(Node* head,int x){
    Node* temp=new Node(x);

    if(head==NULL){
        temp->next=temp;
        return temp;
    }

    temp->next=head->next;
    head->next=temp;

    int t=head->data;
    head->data=x;
    head->next->data=t;

    return head;
}

Node* insertAtEnd(Node* head,int x){
    Node* temp=new Node(x);

    if(head==NULL){
        temp->next=temp;
        return temp;
    }

    temp->next=head->next;
    head->next=temp;
    int t=head->data;
    head->data=x;
    temp->data=t;

    return temp;
}

Node* deleteAtBeg(Node* head){
    if(head==NULL){
        return NULL;
    }
    if(head->next==head){
        delete(head);
        return NULL;
    }

    head->data=head->next->data;
    Node* temp=head->next;

    head->next=head->next->next;

    delete(temp);

    return head;
}

void print(Node* head){
    if(head==NULL){
        return;
    }

    Node* curr=head;
    cout<<curr->data<<"->";
    curr=curr->next;
    while(curr!=head){
        cout<<curr->data<<"->";
        curr=curr->next;
    }
    cout<<"head"<<endl;
}

int main(){
Node* head=new Node(10);
head->next=new Node(20);
head->next->next=new Node(30);
head->next->next->next=new Node(40);
head->next->next->next->next=head;

print(head);

head=insertAtBeg(head,50);
head=insertAtBeg(head,60);
head=insertAtEnd(head,70);
head=insertAtEnd(head,80);

print(head);

head=deleteAtBeg(head);

print(head);

    return 0;
}