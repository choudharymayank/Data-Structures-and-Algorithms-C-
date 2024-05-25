#include<bits/stdc++.h>
using namespace std;

int secondLargest(int arr[],int n){
int max1=arr[0];
int max2=INT_MIN;

for(int i=1;i<n;i++){
    if(arr[i]>max1){
        max2=max1;
        max1=arr[i];
    }else if(arr[i]<max1 and max2==INT_MIN){
        max2=arr[i];
    }else if(arr[i]<max1 and max2<arr[i]){
        max2=arr[i];
    }
}

return max2;
}

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

if(secondLargest(arr,n)!=INT_MIN){
    cout<<secondLargest(arr,n);
}else{
    cout<<"No second max"<<endl;
}

    return 0;
}