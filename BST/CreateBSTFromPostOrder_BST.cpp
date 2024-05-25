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

Node* createBST(int postorder[],int &postIndex,int min,int max){
if(postIndex<=-1){
    return NULL;
}
int x=postorder[postIndex];
if(x>min and x<max){
    Node* root=new Node(postorder[postIndex--]);
    root->right=createBST(postorder,postIndex,root->data,max);
    root->left=createBST(postorder,postIndex,min,root->data);
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

    int postorder[n];
    for(int i=0;i<n;i++){
        cin>>postorder[i];
    }
    int postIndex=n-1;
    Node* root=createBST(postorder,postIndex,INT_MIN,INT_MAX);

    inorder(root);
    
    return 0;
}