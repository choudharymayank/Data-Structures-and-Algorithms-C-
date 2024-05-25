#include<bits/stdc++.h>
using namespace std;

int left(int i){
    return 2*i +1;
}

int right(int i){
    return 2*i +2;
}

int parent (int i){
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
        swap(arr[i],arr[smallest]);
        minHeapify(arr,size,capacity,smallest);
    }

}

int extractMin(int arr[],int size,int capacity){
    swap(arr[0],arr[size-1]);
    size--;
    minHeapify(arr,size,capacity,0);
    return size;
}

int main(){
int size,capacity;
cin>>size>>capacity;

int arr[capacity];

for(int i=0;i<size;i++){
    cin>>arr[i];
}

size=extractMin(arr,size,capacity);

for(int i=0;i<size;i++){
    cout<<arr[i]<< " ";
}

cout<<endl;

    return 0;
}