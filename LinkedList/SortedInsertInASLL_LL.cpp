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

Node* sortedInsert(Node* head,int x){
    Node* temp=new Node(x);

    if(head==NULL){
        return temp;
    }
    if(temp->data<head->data){
        temp->next=head;
        return temp;
    }

    Node* curr=head;
    while(curr->next!=NULL and curr->next->data<=temp->data){
        curr=curr->next;
    }

    temp->next=curr->next;
    curr->next=temp;

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

print(head);

head=sortedInsert(head,35);
head=sortedInsert(head,45);
head=sortedInsert(head,5);

print(head);

head=sortedInsert(head,5);
head=sortedInsert(head,30);
head=sortedInsert(head,45);

print(head);

    return 0;
}