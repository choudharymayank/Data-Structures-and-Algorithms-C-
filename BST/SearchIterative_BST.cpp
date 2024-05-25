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

bool SearchIterativeBST(Node* root,int k){
    while(root!=NULL){
    if(root->key==k){
        return true;
    }
    if(root->key>k){
        root=root->left;
    }else if(root->key<k){
        root=root->right;
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

cout<<SearchIterativeBST(root,100);

    return 0;
}