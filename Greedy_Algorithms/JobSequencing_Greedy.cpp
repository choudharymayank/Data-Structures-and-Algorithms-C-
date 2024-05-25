#include<bits/stdc++.h>
using namespace std;

static bool myCmp(pair<int,int> p1,pair<int,int> p2){
    return p1.second>p2.second;
}

int maxJobs(vector<pair<int,int>> v,int n){
    sort(v.begin(),v.end(),myCmp);
    int maxx=INT_MIN;
    for(int i=0;i<n;i++){
      maxx=max(maxx,v[i].first);
    }

    int timeline[maxx];
    for(int i=0;i<n;i++){
        timeline[i]=-1;
    }

    for(int i=0;i<n;i++){
        for(int j=v[i].first-1;j>=0;j--){
            if(timeline[j]==-1){
                timeline[j]=v[i].second;
                break;
            }
        }
    }
    int res=0;
    for(int i=0;i<n;i++){
        if(timeline[i]!=-1){
            res+=timeline[i];
        }
    }

    return res;
}

int main(){
int n;
cin>>n;

vector<pair<int,int>> v;

for(int i=0;i<n;i++){
int x,y;
cin>>x>>y;

v.push_back({x,y});
}

cout<<maxJobs(v,n);

    return 0;
}