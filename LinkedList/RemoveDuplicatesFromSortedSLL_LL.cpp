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

void removeDuplicates(Node* head){
    Node* curr=head;
    while(curr!=NULL and curr->next!=NULL){
        if(curr->data==curr->next->data){
            Node* temp=curr->next;
            curr->next=curr->next->next;
            delete(temp);
        }else{
            curr=curr->next;
        }
    }
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
head->next->next=new Node(20);
head->next->next->next=new Node(30);
head->next->next->next->next=new Node(30);
head->next->next->next->next->next=new Node(30);

print(head);

removeDuplicates(head);

print(head);

    return 0;
}