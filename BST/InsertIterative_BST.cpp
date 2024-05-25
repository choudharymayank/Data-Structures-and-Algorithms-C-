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
    Node* curr=root;
    Node* parent=NULL;
    while(curr!=NULL){
        parent=curr;
        if(curr->key>k){
            curr=curr->left;
        }else if(curr->key<k){
            curr=curr->right;
        }else{
            return root;
        }
    }
    if(parent==NULL){
        return temp;
    }
    if(parent->key<k){
        parent->left=temp;
    }else{
        parent->right=temp;
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
