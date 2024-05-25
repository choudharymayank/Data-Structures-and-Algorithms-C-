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

void iterativePreorder(Node* root){
    Node* curr=root;
    stack<Node*> st;
    
    while(curr!=NULL or !st.empty()){
       while(curr!=NULL){
           cout<<curr->key<<" ";
           st.push(curr);
           curr=curr->left;
       }
       curr=st.top();
       st.pop();
       curr=curr->right;
    }
}

int main(){
Node* root=new Node(10);
root->left=new Node(20);
root->right=new Node(30);
root->left->left=new Node(40);
root->left->right=new Node(50);
root->right->right=new Node(60);
root->left->right->left=new Node(70);
root->left->right->right=new Node(80);

iterativePreorder(root);

    return 0;
}