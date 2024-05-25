#include<bits/stdc++.h>
using namespace std;

void previousGreater(int arr[],int n){
    stack<int> st;
    st.push(arr[0]);
    cout<<-1<<" ";

    for(int i=1;i<n;i++){
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

previousGreater(arr,n);

    return 0;
}