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

void verticalSum(Node* root,int hd,map<int,int> &m){
    if(root==NULL){
        return;
    }
    m[hd]+=root->key;
    verticalSum(root->left,hd-1,m);
    verticalSum(root->right,hd+1,m);
}

int main(){
Node* root=new Node(10);
root->left=new Node(20);
root->right=new Node(30);
root->left->left=new Node(5);
root->left->right=new Node(15);

map<int,int> m;

verticalSum(root,0,m);

for(auto it: m){
    cout<<it.second<<" ";
}
cout<<endl;

    return 0;
}