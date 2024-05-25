//Given an array of n numbers  that has values int the range [1,n+1]. Every number appears exactly once.
//Find the missing number.

#include<bits/stdc++.h>
using namespace std;

int findMissing(int arr[],int n){
    
int x=1;
for(int i=2;i<=n+1;i++){
    x^=i;
}

for(int i=0;i<n;i++){
    x^=arr[i];
}

return x;

}

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<findMissing(arr,n);

    return 0;
}