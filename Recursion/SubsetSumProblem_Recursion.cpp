#include<bits/stdc++.h>
using namespace std;

void subsetSumProblem(int arr[],int n,int sum,int &res,int i,vector<int> curr){
if(i==n){
    int x=0;
    for(int i=0;i<curr.size();i++){
        x+=curr[i];
    }
    if(x==sum){
        res++;
    }
    return;
}
subsetSumProblem(arr,n,sum,res,i+1,curr);
curr.push_back(arr[i]);
subsetSumProblem(arr,n,sum,res,i+1,curr);
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

int res=0;
vector<int> curr;
subsetSumProblem(arr,n,sum,res,0,curr);

cout<<res;

    return 0;
}