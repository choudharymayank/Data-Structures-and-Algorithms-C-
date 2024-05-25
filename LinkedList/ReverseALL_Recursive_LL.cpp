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

Node *recFirst(Node *head){
    if(head==NULL||head->next==NULL)return head;
    Node *rest_head=recFirst(head->next);
    Node *rest_tail=head->next;
    rest_tail->next=head;
    head->next=NULL;
    return rest_head;
}

Node *recSecond(Node *curr,Node *prev){
    if(curr==NULL)return prev;
    Node *next=curr->next;
    curr->next=prev;
    return recSecond(next,curr);
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
head->next->next->next->next=new Node(50);

print(head);

head=recFirst(head);
print(head);
head=recSecond(head,NULL);
print(head);
head=recSecond(head,NULL);
print(head);

    return 0;
}