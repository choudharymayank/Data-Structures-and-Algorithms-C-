#include<bits/stdc++.h>
using namespace std;

int left(int i){
    return 2*i +1;
}

int right(int i){
    return 2*i +2;
}

int parent(int i){
    return floor((i-1)/2);
}

void minHeapify(int arr[],int size,int capacity,int i){
    int lt=left(i);
    int rt=right(i);
    int smallest=i;

    if(lt<=size-1 and arr[lt]<arr[smallest]){
        smallest=lt;
    }
    if(rt<=size-1 and arr[rt]<arr[smallest]){
        smallest=rt;
    }
    if(smallest!=i){
        swap(arr[smallest],arr[i]);
        minHeapify(arr,size,capacity,smallest);
    }
}

void buildHeap(int arr[],int size,int capacity){
    for(int i=floor((size-2)/2);i>=0;i--){
        minHeapify(arr,size,capacity,i);
    }
}

int main(){
int size,capacity;
cin>>size>>capacity;

int arr[capacity];
for(int i=0;i<size;i++){
    cin>>arr[i];
}

buildHeap(arr,size,capacity);

for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl; 

    return 0;
}