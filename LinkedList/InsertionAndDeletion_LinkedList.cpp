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

Node* insertionAtBeg(Node* head,int x){
    Node* temp=new Node(x);

    if(head==NULL){
        return temp;
    }

    temp->next=head;
    head=temp;

    return temp;
}

Node* insertionAtEnd(Node* head,int x){
    Node* temp=new Node(x);

    if(head==NULL){
        return temp;
    }

    Node* curr=head;
    while(curr!=NULL and curr->next!=NULL){
        curr=curr->next;
    }

    curr->next=temp;

    return head;
}

Node* deletionAtBeg(Node* head){
    if(head==NULL){
        cout<<"No Element to delete"<<endl;
        return NULL;
    }

    Node* temp=head->next;
    delete(head);
    return temp;
}

Node* deletionAtEnd(Node* head){
    if(head==NULL){
        cout<<"No Element to delete"<<endl;
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

     delete(curr->next);
     curr->next=NULL;

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
head->next=new Node(20);
head->next->next=new Node(30);
head->next->next->next=new Node(40);

head=insertionAtBeg(head,50);
head=insertionAtBeg(head,60);

print(head);

insertionAtEnd(head,70);
insertionAtEnd(head,80);

print(head);

head=deletionAtBeg(head);
head=deletionAtEnd(head);

print(head);

    return 0;
}