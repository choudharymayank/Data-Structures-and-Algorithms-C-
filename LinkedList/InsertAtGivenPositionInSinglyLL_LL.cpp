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

Node* insertPos(Node* head,int x,int pos){
    Node* temp=new Node(x);
    if(pos==1){
        temp->next=head;
        temp=head;

        return temp;
    }

    Node* curr=head;
    while(curr->next!=NULL and pos!=2){
        curr=curr->next;
        pos--;
    }

    if(pos!=2){
        cout<<"Pos is ahead of the end of LL"<<endl;
        return head;
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

insertPos(head,50,3);

print(head);

    return 0;
}