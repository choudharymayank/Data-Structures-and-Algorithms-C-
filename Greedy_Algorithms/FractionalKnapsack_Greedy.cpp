#include<bits/stdc++.h>
using namespace std;

static bool myCmp(pair<int,int> p1,pair<int,int> p2){
    double r1=(double)p1.second/p1.first;
    double r2=(double)p2.second/p2.first;

    return r1>r2;
}

double fKnaps(pair<int,int> arr[],int n,int k){
    sort(arr,arr+n,myCmp);
    double res=0.0;
    for(int i=0;i<n;i++){
        if(k>=arr[i].first){
            k-=arr[i].first;
            res+=arr[i].second;
        }else{
            res+=((double)k/arr[i].first)*arr[i].second;
            
            k=0;
            break;
        }
    }
    return res;
}

int main(){
int n;
cin>>n;

pair<int,int> arr[n];

for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;

    arr[i]={x,y};
}

int k;
cin>>k;

cout<<fKnaps(arr,n,k);

    return 0;
}