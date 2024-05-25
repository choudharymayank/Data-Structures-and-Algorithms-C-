//Segregate Positive and Negative
//Segregate Even And Odd
//Sort a Binary array

#include<bits/stdc++.h>
using namespace std;

void seg(int arr[],int n){

int i=-1,j=n;

while(true){
    do{i++;}while(arr[i]<0);
    do{j--;}while(arr[j]>=0);
    if(i>=j){
        return;
    }
    swap(arr[i],arr[j]);
}
}

int main(){
int n;
cin>>n;

int arr[n];

for(int i=0;i<n;i++){
    cin>>arr[i];
}

seg(arr,n);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}