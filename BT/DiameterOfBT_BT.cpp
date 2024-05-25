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

int diameterBT(Node* root,int &res){
if(root==NULL){
    return 0;
}

int lh=diameterBT(root->left,res);
int rh=diameterBT(root->right,res);

res=max(res,lh+rh+1);

return 1+max(lh,rh);
}

int main(){

Node* root=new Node(18);
root->left=new Node(4);
root->right=new Node(20);
root->right->left=new Node(13);
root->right->left->left=new Node(60);
root->right->right=new Node(70);

int res=0;

diameterBT(root,res);

cout<<res;

    return 0;
}