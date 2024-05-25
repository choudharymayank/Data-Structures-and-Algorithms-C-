#include<bits/stdc++.h>
using namespace std;
int count=0;
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
void KthSmallest_BST(Node* root,int k){
    if(root==NULL){
        return;
    }
    KthSmallest_BST(root->left,k);
    count++;
    if(count==k){
        cout<<root->key;
    }
    KthSmallest_BST(root->right,k);
    count++;
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

cout<<KthSmallest_BST(root,4);

    return 0;
}
