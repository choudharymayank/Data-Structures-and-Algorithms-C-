#include<bits/stdc++.h>
using namespace std;

void nextGreater(int arr[],int n){
    stack<int> st;
    st.push(arr[n-1]);
    cout<<-1<<" ";
    for(int i=n-2;i>=0;i--){
        while(!st.empty() and st.top()<=arr[i]){
               st.pop();
        }
        if(st.empty()){
          cout<<-1<<" ";
        }else{
            cout<<st.top()<<" ";
        }

        st.push(arr[i]);
    }
}

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

nextGreater(arr,n);

    return 0;
}