#include<bits/stdc++.h>
using namespace std;

void printSpan(int arr[],int n){
    stack<int> st;
    st.push(0);
    cout<<1<<" ";

    for(int i=1;i<n;i++){
        while(!st.empty() and arr[st.top()]<=arr[i]){
            st.pop();
        }

        int span=st.empty()?(i+1):(i-st.top());

        cout<<span<<" ";
        st.push(i);
    }
}

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

printSpan(arr,n);

    return 0;
}