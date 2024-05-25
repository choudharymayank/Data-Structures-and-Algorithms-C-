#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int key;
int prev=INT_MIN;
Node* left;
Node* right;

Node(int k){
    key=k;
    left=NULL;
    right=NULL;
}
};

void bottomView(Node* root,int hd,map<int,int> &m){
    if(root==NULL){
        return;
    }
    m[hd]=root->key;
    bottomView(root->left,hd-1,m);
    bottomView(root->right,hd+1,m);
}

int main(){
Node* root=new Node(10);
root->left=new Node(20);
root->right=new Node(30);
root->left->left=new Node(40);
root->left->right=new Node(50);
root->right->left=new Node(60);
root->right->right=new Node(70);

map<int,int> m;
bottomView(root,0,m);

for(auto it: m){
    cout<<it.second<<" ";
}

cout<<endl;

    return 0;
}