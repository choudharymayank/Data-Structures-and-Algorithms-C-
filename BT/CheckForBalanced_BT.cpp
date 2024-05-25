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

int height(Node* root){
    if(root==NULL){
        return 0;
    }
    return 1 + max(height(root->left),height(root->right));
}

bool checkBalanced(Node* root){
    if(root==NULL){
        return true;
    }
    if(abs(height(root->left)-height(root->right))>1){
        return false;
    }
    checkBalanced(root->left);
    checkBalanced(root->right);
}


int main(){

Node* root=new Node(3);
root->left=new Node(4);
root->right=new Node(8);
root->left->left=new Node(5);
root->left->right=new Node(9);
root->right->right=new Node(7);
root->right->right->left=new Node(6);

preorder(root);
cout<<endl;

cout<<checkBalanced(root);


    return 0;
}