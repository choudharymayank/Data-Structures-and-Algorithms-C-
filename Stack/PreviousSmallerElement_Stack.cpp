#include<bits/stdc++.h>
using namespace std;

void previousSmaller(int arr[],int n){
    stack<int> st;
    st.push(arr[0]);
    cout<<-1<<" ";

    for(int i=1;i<n;i++){
        while(!st.empty() and st.top()>=arr[i]){
            st.pop();
        }

        int x=!st.empty()?st.top():-1;
        cout<<x<<" ";

        st.push(arr[i]);
    }
}

void nextSmaller(int arr[],int n){
    stack<int> st;
    st.push(arr[n-1]);
    cout<<-1<<" ";

    for(int i=n-2;i>=0;i--){
        while(!st.empty() and st.top()>=arr[i]){
            st.pop();
        }

        int x=!st.empty()?st.top():-1;
        cout<<x<<" ";

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

previousSmaller(arr,n);
cout<<endl;
nextSmaller(arr,n);


    return 0;
}