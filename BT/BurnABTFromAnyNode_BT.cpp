#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*left,*right;

    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }

};

void timeToBurn(Node* startNode,unordered_map<Node*,Node*> m,unordered_map<Node*,bool> &visited,int &timer){
    queue<Node*> q;
    q.push(startNode);
    visited[startNode]=true;
     
    while(!q.empty()){
        bool check=0;
        int count=q.size();
        for(int i=0;i<count;i++){
        Node* curr=q.front();
        q.pop();
        if(curr->left!=NULL and visited[curr->left]==false){
        check=true;
        q.push(curr->left);
        visited[curr->left]=true;
        }
        if(curr->right!=NULL and visited[curr->right]==false){
          check=true;
          q.push(curr->right);
          visited[curr->right]=true;
        }
        if(m.find(curr)!=m.end() and visited[m[curr]]==false){
            check=true;
            q.push(m[curr]);
            visited[m[curr]]=true;
        }
        }
        
        if(check){
            timer++;
        }

    }

}

int burnTree(Node* root,int x){
unordered_map<Node*,bool> visited;
Node* startNode;
unordered_map<Node*,Node*> m;
queue<Node*> q;
q.push(root);

while(!q.empty()){
    Node* curr=q.front();
    q.pop();
    visited[curr]=false;
    if(curr->data==x){
        startNode=curr;
    }
    if(curr->left!=NULL){
        q.push(curr->left);
        m[curr->left]=curr;
    }
    if(curr->right!=NULL){
        q.push(curr->right);
        m[curr->right]=curr;
    }

}
int timer=0;
timeToBurn(startNode,m,visited,timer);

return timer;

}

int main(){
Node* root=new Node(10);
root->left=new Node(20);
root->right=new Node(30);
root->left->left=new Node(40);
root->left->right=new Node(50);
root->right->right=new Node(40);


int x;
cin>>x;

cout<<burnTree(root,x);

    return 0;
}