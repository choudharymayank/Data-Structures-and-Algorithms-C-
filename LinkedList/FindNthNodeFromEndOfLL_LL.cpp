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

void NthFromEndUsingLenth(Node* head,int n){
    int len=0;
    Node* curr=head;
    while(curr!=NULL){
        curr=curr->next;
        len++;
    }
    curr=head;
    int x=len-n+1;

    while(x!=1){
        x--;
        curr=curr->next;
    }
    
    cout<<curr->data;
}

void NthFromEndUsingTwoPointers(Node* head,int n){
if(head==NULL){
    return;
}

Node* first=head;
Node* second=head;
while(n!=0){
    n--;
    first=first->next;
}

while(first!=NULL){
    first=first->next;
    second=second->next;
}

cout<<second->data;

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

NthFromEndUsingLenth(head,2);
NthFromEndUsingTwoPointers(head,2);

    return 0;
}