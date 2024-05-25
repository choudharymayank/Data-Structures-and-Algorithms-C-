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

void verticalTraversal(Node* root,int hd,map<int,vector<int>> &m){
    if(root==NULL){
        return;
    }
    m[hd].push_back(root->key);
    verticalTraversal(root->left,hd-1,m);
    verticalTraversal(root->right,hd+1,m);
}

int main(){
Node* root=new Node(10);
root->left=new Node(20);
root->right=new Node(30);
root->left->left=new Node(5);
root->left->right=new Node(15);

map<int,vector<int>> m;
verticalTraversal(root,0,m);

for(auto it: m){
    vector<int> v=it.second;
    for(auto iter: v){
        cout<<(iter)<<" ";
    }
    cout<<endl;
}

    return 0;
}