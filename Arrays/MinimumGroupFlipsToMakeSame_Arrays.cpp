#include<bits/stdc++.h>
using namespace std;

void minFlips(int arr[],int n){
    int k=0;
    int count=0;
    int x;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[k]){
            count++;
            if(count%2!=0){
            cout<<"From "<<i<<" to ";
             x=count;
            }else{
                cout<<i-1<<endl;
            }
            k=i;
        }
    }
    if(x==count){
        cout<<n-1<<endl;
    }
}

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

minFlips(arr,n);

    return 0;
}