#include<bits/stdc++.h>
using namespace std;

void powerSet(string s){
int n=s.size();
for(int counter=0;counter<pow(2,n);counter++){
    int k=0;
    string str;
    int p=counter;
    while(p>0){
        if((p & 1)!=0){
            str+=s[k];
        }
        k++;
        p=p>>1;
    }
    cout<<str<<endl;
}
}

int main(){
string s;
cin>>s;

powerSet(s);

    return 0;
}