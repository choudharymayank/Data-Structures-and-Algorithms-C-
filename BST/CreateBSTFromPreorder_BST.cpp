#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node* left,*right;

Node(int d){
    data=d;
    left=NULL;
    right=NULL;
}
};

Node* createBST(int preorder[],int n,int &preIndex,int min,int max){
if(preIndex>=n){
    return NULL;
}
int x=preorder[preIndex];
if(x>min and x<max){
    Node* root=new Node(preorder[preIndex++]);
    root->left=createBST(preorder,n,preIndex,min,root->data);
    root->right=createBST(preorder,n,preIndex,root->data,max);
    return root;
}
return NULL;
}

void inorder(Node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main(){
    int n;
    cin>>n;

    int preorder[n];
    for(int i=0;i<n;i++){
        cin>>preorder[i];
    }
    int preIndex=0;
    Node* root=createBST(preorder,n,preIndex,INT_MIN,INT_MAX);

    inorder(root);
    
    return 0;
}