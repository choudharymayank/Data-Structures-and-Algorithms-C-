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

int checkBalanced(Node* root){
    if(root==NULL){
        return 0;
    }
    if(checkBalanced(root->left)==-1 or checkBalanced(root->right)==-1){
        return-1;
    }
    int lh=checkBalanced(root->left);
    int rh=checkBalanced(root->right);
    if((abs(lh-rh))<=1){
        return max(lh,rh) + 1;
    }else{
        return -1;
    }
}


int main(){

Node* root=new Node(18);
root->left=new Node(4);
root->right=new Node(20);
root->right->left=new Node(13);
root->right->right=new Node(70);

cout<<checkBalanced(root);


    return 0;
}