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

Node* convertToBT(int in[],int pre[],int &preIndex,int is,int ie){
    if(is>ie){
        return NULL;
    }
    Node* root=new Node(pre[preIndex++]);
    int inIndex;
    for(int i=is;i<=ie;i++){
        if(in[i]==root->key){
            inIndex=i;
            break;
        }
    }

    root->left=convertToBT(in,pre,preIndex,is,inIndex-1);
    root->right=convertToBT(in,pre,preIndex,inIndex+1,ie);

return root;
}

void preorder(Node* root){
if(root==NULL){
    return;
}
cout<<root->key<<" ";
preorder(root->left);
preorder(root->right);
}

int main(){
int n;
cin>>n;

int pre[n],inorder[n];
for(int i=0;i<n;i++){
    cin>>pre[i]>>inorder[i];
}

int preIndex=0;

int is=0,ie=n-1;
Node* root= convertToBT(inorder,pre,preIndex,is,ie);

preorder(root);

    return 0;
}