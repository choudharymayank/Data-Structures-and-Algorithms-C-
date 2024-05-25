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

bool checkPair(Node* root,int sum,set<int> &s){
    if(root==NULL){
        return false;
    }
    if(s.find(sum-(root->key))!=s.end()){
        return true;
    }
    s.insert(root->key);
    if(checkPair(root->left,sum,s) or checkPair(root->right,sum,s)){
        return true;
    }
    return false;
}

int main(){
Node* root=new Node(20);
root->left=new Node(15);
root->right=new Node(30);
root->left->left=new Node(100);
root->left->left->left=new Node(7);
root->left->right=new Node(18);
root->right->right=new Node(40);
root->right->right->left=new Node(35);
root->right->right->right=new Node(50);
root->right->right->right->right=new Node(80);

set<int> s;

cout<<checkPair(root,107,s);

    return 0;
}