#include<bits/stdc++.h>
using namespace std;

static bool myCmp(pair<int,int> p1,pair<int,int> p2){
    return p1.second<p2.second;
}

int maxActivities(vector<pair<int,int>> &v){
    sort(v.begin(),v.end(),myCmp);
    int prev=0;
    int res=1;

    for(int curr=1;curr<v.size();curr++){
        if(v[prev].second<=v[curr].first){
               res++;
               prev=curr;
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

cout<<maxActivities(v);
cout<<endl;
for(int i=0;i<n;i++){
    cout<<v[i].first<<" "<<v[i].second<<endl;
}

    return 0;
}