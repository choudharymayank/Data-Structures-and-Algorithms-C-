#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int key;
Node* left;
Node* right;

Node(int k){
    key=k;
    left=NULL;
    right=NULL;
}

};

void preorder(Node* root){
if(root==NULL){
    return;
}
preorder(root->left);
cout<<root->key<<" ";
preorder(root->right);
}

Node* convertBTtoDLL(Node* root,Node* &prev){
if(root==NULL){
    return NULL;
}

Node* head=convertBTtoDLL(root->left,prev);
if(prev==NULL){
    head=root;
}else{
    root->left=prev;
    prev->right=root;
}
prev=root;

convertBTtoDLL(root->right,prev);

return head;
}


int main(){

Node* root=new Node(10);
root->left=new Node(20);
root->right=new Node(30);
root->right->left=new Node(40);
root->right->right=new Node(50);

Node* prev=NULL;

Node* curr=convertBTtoDLL(root,prev);

while(curr!=NULL){
    cout<<curr->key<<"->";
    curr=curr->right;
}

    return 0;
}