#include<bits/stdc++.h>
using namespace std;

bool checkKth(int n,int k){

if((n & 1<<(k-1))==0){
return false;
}
return true;

}

int main(){
int n,k;
cin>>n>>k;

cout<<checkKth(n,k);

    return 0;
}


/* Using Right Shift Operator 

bool checkKth(int n,int k){

    if((n>>(k-1) & 1 )==0){
        return false;
    }

    return true;
}

*/