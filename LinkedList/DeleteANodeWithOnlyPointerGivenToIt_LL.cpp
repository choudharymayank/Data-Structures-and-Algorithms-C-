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

void deleteptr(Node* ptr){
    ptr->data=ptr->next->data;
    Node* temp=ptr->next;
    ptr->next=ptr->next->next;
    delete(temp);
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

deleteptr(head->next->next);

print(head);

    return 0;
}