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

int search(Node* head,int x){
    if(head==NULL){
        return -1;
    }
    if(head->data==x){
        return  1;
    }
    int pos=1; 
    Node* curr=head;
    
    while(curr!=NULL){
        if(curr->data==x){
            return pos;
        }
        pos++;
        curr=curr->next;
    }

    return -1;
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

cout<<search(head,50);

    return 0;
}