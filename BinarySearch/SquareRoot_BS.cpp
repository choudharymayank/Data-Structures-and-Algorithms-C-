#include<bits/stdc++.h>
using namespace std;

int sqRoot(int x){
    int low=1,high=x,ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(mid*mid==x){
             return mid;
        }else if(mid*mid>x){
            high=mid-1;
        }else{
            low=mid+1;
            ans=mid;
        }
    }
return ans;
}

int main(){
int x;
cin>>x;

cout<<sqRoot(x);

    return 0;
}