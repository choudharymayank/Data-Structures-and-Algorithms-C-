#include<bits/stdc++.h>
using namespace std;

struct MyQueue{
int *arr;
int front;
int rear;
int capacity;

MyQueue(int c){
arr=new int[c];
capacity=c;
front=-1;
rear=-1;
}

void push(int x){
    if(rear==capacity-1){
        cout<<"QueueOverflow"<<endl;
        return;
    }
    if(front==rear){
        front++;
        rear++;
        arr[rear]=x;
        return;
    }

    rear++;
    arr[rear]=x;
}
void pop(){
    if(rear==-1){
        cout<<"QueueUnderflow"<<endl;
        return;
    }
    if(front==rear){
        front--;
        rear--;
        return;
    }
rear--;
}

int size(){
    return rear+1;
}

bool isempty(){
    return rear==-1;
}

int getFront(){
    if(isempty()){
        return -1;
    }else{
        return arr[front];
    }
}

};

int main(){

    MyQueue q(3);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    cout<<q.getFront()<<endl;
    q.pop();
    cout<<q.getFront()<<endl;
    q.pop();
    cout<<q.getFront()<<endl;
    q.push(1);
    cout<<q.getFront()<<endl;




    return 0;
}