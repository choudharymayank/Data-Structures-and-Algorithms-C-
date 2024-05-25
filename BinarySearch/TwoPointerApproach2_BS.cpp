//Given a sorted array and a sum,find if there is a triplet with given sum.

#include<bits/stdc++.h>
using namespace std;

bool isPair(int arr[],int i,int j,int sum){
    while(i<j){
        if(arr[i]+arr[j]==sum){
            return true;
        }
        else if(arr[i]+arr[j]>sum){
            j--;
        }else{
            i++;
        }
    }
    return false;
}

bool isTriplet(int arr[],int n,int sum){
 for(int i=0;i<n;i++){
    if(isPair(arr,i+1,n-1,sum-arr[i])){
        return true;
    }
 }
 return false;
}

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int sum;
cin>>sum;

cout<<isTriplet(arr,n,sum);

    return 0;
}