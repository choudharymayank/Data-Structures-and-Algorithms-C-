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

Node* segregate(Node* head){
    Node* eS=NULL;
    Node* eE=NULL;
    Node* oS=NULL;
    Node* oE=NULL;

    Node* curr=head;
    while(curr!=NULL){
        if((curr->data)%2==0){
            if(eS==NULL){
                eS=curr;
                eE=curr;
            }else{
                eE->next=curr;
                eE=eE->next;
            }
        }else{
            if(oS==NULL){
                oS=curr;
                oE=curr;
            }else{
                oE->next=curr;
                oE=oE->next;
            }
        }
        curr=curr->next;
    }
     if(oS==NULL or eS==NULL){
        return head;
     }
    eE->next=oS;
    oE->next=NULL;

    return eS;
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
head->next=new Node(21);
head->next->next=new Node(30);
head->next->next->next=new Node(41);
head->next->next->next->next=new Node(50);

print(head);

head=segregate(head);

print(head);

    return 0;
}