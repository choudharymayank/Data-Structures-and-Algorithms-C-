#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int key;
int prev=INT_MIN;
Node* left;
Node* right;

Node(int k){
    key=k;
    left=NULL;
    right=NULL;
}
};
int prev=INT_MIN;
bool checkBST(Node* root){
    if(root==NULL){
        return true;
    }
    if(!checkBST(root->left)){
        return false;
    }
    if(root->key<=prev){
        return false;
    }
    prev=root->key;
    if(!checkBST(root->right)){
        return false;
    }
    return true;
}


int main(){
Node* root=new Node(20);
root->left=new Node(15);
root->right=new Node(30);
root->left->left=new Node(100);
root->left->left->left=new Node(7);
root->left->right=new Node(18);
root->right->right=new Node(40);
root->right->right->left=new Node(35);
root->right->right->right=new Node(50);
root->right->right->right->right=new Node(80);

cout<<checkBST(root);

    return 0;
}
