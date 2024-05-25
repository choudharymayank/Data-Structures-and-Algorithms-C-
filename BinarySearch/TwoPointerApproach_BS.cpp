//Given a sorted array and a sum,find if there is a pair with a given sum.
#include<bits/stdc++.h>
using namespace std;

bool isPair(int arr[],int n,int sum){
    int i=0,j=n-1;
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

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

int sum;
cin>>sum;

cout<<isPair(arr,n,sum);

    return 0;
}