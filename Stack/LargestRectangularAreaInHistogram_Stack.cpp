#include<bits/stdc++.h>
using namespace std;

int areaNaive(int arr[],int n){
    int res=0;
    for(int i=0;i<n;i++){
        int curr_area=arr[i];
        for(int j=i+1;j<n;j++){
            if(arr[j]>=arr[i]){
                curr_area+=arr[i];
            }else{
                break;
            }
        }

        for(int j=i-1;j>=0;j--){
            if(arr[j]>=arr[i]){
                curr_area+=arr[i];
            }else{
                break;
            }
        }

        res=max(res,curr_area);
    }

    return res;
}

//Method 2: 
//In place of finding smaller element on left and right side of the curr element by using a loop,we 
//can do it by next smaller and previous smaller functions which will use stack means it will reqiure O(n) extra space.

int area_Efficient(int arr[],int n){
    stack <int> s;
    int res=0;
    int tp;
    int curr;
    
    for(int i=0;i<n;i++){
        while(s.empty()==false && arr[s.top()]>=arr[i]){
            tp=s.top();s.pop();
            curr=arr[tp]* (s.empty() ? i : i - s.top() - 1);
            res=max(res,curr);
        }
        s.push(i);
    }
    while(s.empty()==false){
        tp=s.top();s.pop();
        curr=arr[tp]* (s.empty() ? n : n - s.top() - 1);
        res=max(res,curr);
    }
    
    return res;
    
}

int main(){
int n;
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<areaNaive(arr,n);
cout<<endl;
cout<<area_Efficient(arr,n);

    return 0;
}