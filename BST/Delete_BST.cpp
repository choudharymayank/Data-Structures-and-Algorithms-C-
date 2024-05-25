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

Node* insertBST(Node* root,int k){
    Node* temp=new Node(k);
    if(root==NULL){
        return temp;
    }
    if(root->key>k){
        root->left= insertBST(root->left,k);
    }else if(root->key<k){
         root->right=insertBST(root->right,k);
    }
    return root;
}

void preorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->key<<" ";
    preorder(root->left);
    preorder(root->right);
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

Node* res=insertBST(root,60);
preorder(res);

    return 0;
}
