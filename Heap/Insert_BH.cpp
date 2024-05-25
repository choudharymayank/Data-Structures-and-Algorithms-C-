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

int insertminHeap(int arr[],int size,int capacity,int k){
    if(size==capacity){
       return size;
    }
    size++;
    arr[size-1]=k;
    int i=size-1;
    while(i!=0 and arr[(parent(i))]>arr[i]){
        swap(arr[parent(i)],arr[i]);
        i=parent(i);
    }
   return size;
}

int main(){
int size,capacity;
cin>>size>>capacity;

int arr[capacity];
for(int i=0;i<size;i++){
    cin>>arr[i];
}

int k;
cin>>k;

size=insertminHeap(arr,size,capacity,k);

for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

    return 0;
}