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

Node* getSuccesor(Node* root){
    Node* curr=root;
    curr=curr->right;
    while(curr!=NULL and curr->left!=NULL){
        curr=curr->left;
    }
    return curr;
}

Node* deleteBST(Node* root,int k){
    if(root==NULL){
        return root;
    }
    if(root->key>k){
         root->left=deleteBST(root->left,k);
    }else if(root->key<k){
        root->right=deleteBST(root->right,k);
    }else{
         if(root->right==NULL){
            Node* temp=root->left;
            delete(root);
            return temp;
        }else if(root->left==NULL){
            Node* temp=root->right;
            delete(root);
            return temp;
        }else{
            Node* temp=getSuccesor(root);
            root->key=temp->key;
            root->right=deleteBST(root->right,temp->key);
        }
    }
    return root;
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
root->left=new Node(15);
root->right=new Node(30);
root->left->left=new Node(12);
root->left->left->left=new Node(7);
root->left->right=new Node(18);
root->right->right=new Node(40);
root->right->right->left=new Node(35);
root->right->right->right=new Node(50);
root->right->right->right->right=new Node(80);

Node* curr=deleteBST(root,15);
inorder(curr);

    return 0;
}