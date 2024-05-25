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

void fixNodes(Node* root,Node* &prev,Node* &first,Node* &second){
    if(root==NULL){
        return;
    }
    fixNodes(root->left,prev,first,second);
    if(prev!=NULL and root->key<prev->key){
        if(first==NULL){
            first=prev;
        }   
        second=root;
    }
    prev=root;
    fixNodes(root->right,prev,first,second);
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->key<<" ";
    inorder(root->right);
}

int main(){
Node* root=new Node(20);
root->left=new Node(60);
root->right=new Node(80);
root->left->left=new Node(4);
root->left->right=new Node(10);
root->right->left=new Node(8);
root->right->right=new Node(100);

Node* prev=NULL;
Node* first=NULL;
Node* second=NULL;

fixNodes(root,prev,first,second);

int temp=first->key;
first->key=second->key;
second->key=temp;

inorder(root);

    return 0;
}