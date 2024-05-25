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

Node* floorBST(Node* root,int k){
    if(root==NULL){
        return NULL;
    }
    Node* curr=root;
    Node* res=NULL;
    while(curr!=NULL){
        if(curr->key>k){
            curr=curr->left;
        }else if(curr->key<k){
            res=curr;
            curr=curr->right;
        }else{
            return curr;
        }
    }
    return res;
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

Node* res=floorBST(root,19);
if(res!=NULL){
    cout<<res->key<<endl;
}else{
    cout<<" No Value "<<endl;
}

    return 0;
}
