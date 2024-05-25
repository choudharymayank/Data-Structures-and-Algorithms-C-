#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left,*right;

    Node(int d){
        int data=d;
        left=NULL;
        right=NULL;
    }
};

Node* createBST(int levelorder[],int n,int index){

queue<pair<Node*,pair<int,int>>> q;

q.push({NULL,{INT_MIN,INT_MAX}});
Node* root;

while(!q.empty() and index<n){
    Node* parent=q.front().first;
    pair<int,int> p=q.front().second;
    q.pop();
    int min=p.first;
    int max=p.second;

    int x=levelorder[index];
    if(x<min or x>max){
        continue;
    }
        Node* temp=new Node(x);
        index++;
        if(parent==NULL){
            root=temp;
        }else{
            if(x<parent->data){
                parent->left=temp;
            }else{
                parent->right=temp;
            }
        }
        q.push({temp,{min,temp->data}});
        q.push({temp,{temp->data,max}});
}

return  root;
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

int levelorder[n];
for(int i=0;i<n;i++){
    cin>>levelorder[i];
}
Node* root=createBST(levelorder,n,0);

inorder(root);
    return 0;
}