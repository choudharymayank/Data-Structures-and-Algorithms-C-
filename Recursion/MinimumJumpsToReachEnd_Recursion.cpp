#include<bits/stdc++.h>
using namespace std;

int minJumps(int arr[],int n,int k){
    if(k>=n-1){
        return 0;
    }

     int res=INT_MAX;
    for(int i=1;i<=arr[k];i++){
        int sub_res= minJumps(arr,n,k+i);
        if(sub_res!=INT_MAX){
        res=min(res,sub_res + 1);
        }
    }

    return res;
}

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<minJumps(arr,n,0);

    return 0;
}

/*Alternate Solution
int minJumps(int arr[],int n){
    

    int res=INT_MAX;
    for(int i=0;i<=n-2;i++){
        if(i+ arr[i]>=n-1){
            int sub_res=minJumps(arr,i+1);
            if(sub_res!=INT_MAX){
                res=min(res,sub_res+1);
            }
        }
    }
    return res;
}

*/
