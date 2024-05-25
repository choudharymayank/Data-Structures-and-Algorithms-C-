#include<bits/stdc++.h>
using namespace std;

static bool myCmp(pair<int,int> p1,pair<int,int> p2){
    return p1.first<p2.first;
}

void merge(pair<int,int> arr[],int n){

sort(arr,arr+n,myCmp);
int res=0;
for(int i=1;i<n;i++){
    if(arr[i].first<=arr[res].second){
         arr[res].first=min(arr[res].first,arr[i].first);
         arr[res].second=max(arr[res].second,arr[i].second);
    }else{
        res++;
        arr[res]=arr[i];
    }
}
for(int i=0;i<=res;i++){
    cout<<arr[i].first<<" "<<arr[i].second<<endl;
}
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

merge(arr,n);


    return 0;
}