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

void decreaseKey(int arr[],int size,int i,int x){
    arr[i]=x;
    while(i!=0 and arr[parent(i)]>arr[i]){
        swap(arr[parent(i)],arr[i]);
        i=parent(i);
    }
}

int main(){
int size,capacity;
cin>>size>>capacity;

int arr[capacity];
for(int i=0;i<size;i++){
    cin>>arr[i];
}
int i,k;
cin>>i>>k;
decreaseKey(arr,size,i,k);

for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
}

cout<<endl;

    return 0;
}