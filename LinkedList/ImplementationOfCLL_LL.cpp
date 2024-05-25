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

    return 0;
}