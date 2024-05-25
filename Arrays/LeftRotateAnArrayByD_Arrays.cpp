#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int i,int j){
    while(i<j){
        swap(arr[i],arr[j]);
        i++;j--;
    }
}

void leftRotate(int arr[],int n,int d){
reverse(arr,0,d-1);
reverse(arr,d,n-1);
reverse(arr,0,n-1);
}

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int d;
cin>>d;

leftRotate(arr,n,d);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}