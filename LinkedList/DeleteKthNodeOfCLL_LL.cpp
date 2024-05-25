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

Node* deleteKth(Node* head,int k){
    if(head==NULL){
        return NULL;
    }
    
    if(k==1){
        return deleteAtBeg(head);
    }

    Node* curr=head;

    while(k!=2){
        curr=curr->next;
        k--;
    }

    if(curr->next==head){
        return deleteAtBeg(head);
    }

    Node* temp=curr->next;
    curr->next=temp->next;

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

int k;
cin>>k;

print(head);

head=deleteKth(head,k);

print(head);

    return 0;
}