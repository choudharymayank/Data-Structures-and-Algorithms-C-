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

int search(Node* head,int x,int &pos){
if(head==NULL){
    return -1;
}

if(head->data==x){
    return pos;
}
pos++;
return search(head->next,x,pos);
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

int pos=1;

cout<<search(head,10,pos);

    return 0;
}