#include<bits/stdc++.h>
using namespace std;

int josephusProblem(int n,int k){
   if(n==1){
       return 0;
   }
   return (josephusProblem(n-1,k)+k)%n;
}

int main(){
int n,k;
cin>>n>>k;

cout<<josephusProblem(n,k);

    return 0;
}