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

bool SearchBST(Node* root,int k){
    if(root==NULL){
        return false;
    }
    if(root->key==k){
        return true;
    }
    if(root->key>k){
        if(SearchBST(root->left,k)){
            return true;
        }
    }
    else if(root->key<k){
        if(SearchBST(root->right,k)){
            return true;
        }
    }
    return false;
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

cout<<SearchBST(root,7);

    return 0;
}