#include<bits/stdc++.h>
using namespace std;

class minHeap{
public:

int arr[];
int size;
int capacity;

minHeap(int c){
arr=new int[c];
size=0;
capacity=c;
}

int left(int i){
    return 2*i+1;
}

int right(int i){
    return 2*i+2;
}

int parent(int i){
    return floor((i-1)/2);
}

};

int main(){


    return 0;
}