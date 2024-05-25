#include<iostream>
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

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->key<<" ";
    inorder(root->left);
    inorder(root->right);
}

void postorder(Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->key<<" ";
}

int maxinBT(Node* root){
    if(root==NULL){
        return INT16_MIN;
    }
    return max(root->key,max(maxinBT(root->left),maxinBT(root->right)));
}

int main(){

    Node* root=new Node(30);
    root->left=new Node(40);
    root->right=new Node(50);
    root->left->left=new Node(70);
    root->right->left=new Node(60);
    root->right->right=new Node(80);

    cout<<maxinBT(root);


    return 0;
}