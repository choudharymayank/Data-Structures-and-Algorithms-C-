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

bool childrenSumProp(Node* root){
    if(root==NULL){
        return true;
    }
    if(root->right!=NULL and root->left!=NULL){
        if(root->key!=root->right->key + root->left->key){
            return false;
        }
        }else if(root->right!=NULL and root->left==NULL){
            if(root->key!=root->right->key){
                return false;
            }
        }else if(root->left!=NULL and root->right==NULL){
            if(root->key!=root->left->key){
                return false;
            }
        }

        childrenSumProp(root->left);
        childrenSumProp(root->right);
}


int main(){

Node* root=new Node(20);
root->left=new Node(8);
root->right=new Node(12);
root->left->left=new Node(3);
root->left->right=new Node(5);

preorder(root);
cout<<endl;
cout<<childrenSumProp(root);



    return 0;
}