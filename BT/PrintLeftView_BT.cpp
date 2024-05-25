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

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->key<<" ";
    inorder(root->left);
    inorder(root->right);
}

void postorder(Node* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->key<<" ";
}

void printLeftView(Node* root){
if(root==NULL){
    return;
}
queue<Node*> q;
q.push(root);

while(!q.empty()){
    int count=q.size();
    for(int i=0;i<count;i++){
        Node* curr=q.front();
        q.pop();
        if(i==0){
            cout<<curr->key<<" ";
        }
        if(curr->left!=NULL){
            q.push(curr->left);
        }
        if(curr->right!=NULL){
            q.push(curr->right);
        }
    }
    cout<<endl;
}
}

int main(){

    Node* root=new Node(30);
    root->left=new Node(40);
    root->right=new Node(50);
    root->left->left=new Node(70);
    root->right->left=new Node(60);
    root->right->right=new Node(80);

    printLeftView(root);


    return 0;
}