//Naive Approach
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

bool pathfind(Node* root,vector<Node*> &p,int x){
if(root==NULL){
    return false;
}
p.push_back(root);
if(root->key==x){
    return true;
}
if(!pathfind(root->left,p,x) and !pathfind(root->right,p,x) and root->key!=x){
    p.pop_back();
    return false;
}
return true;
}

Node* LCA(Node* root,int x,int y){
vector<Node*> p1,p2;
if(pathfind(root,p1,x) and pathfind(root,p2,y)){
for(int i=0;i<p1.size() and i<p2.size();i++){
if(p1[i+1]->key!=p2[i+1]->key){
    return p1[i];
}
}
}else{
    return NULL;
}
}

int main(){
Node* root=new Node(10);
root->left=new Node(20);
root->right=new Node(30);
root->right->left=new Node(40);
root->right->right=new Node(50);
root->right->left->left=new Node(60);
root->right->right->left=new Node(70);
root->right->right->right=new Node(80);

Node* ans=LCA(root,60,10);

if(ans!=NULL){
    cout<<ans->key<<endl;
}else{
    cout<<"Root Was Null"<<endl;
}
    return 0;
}