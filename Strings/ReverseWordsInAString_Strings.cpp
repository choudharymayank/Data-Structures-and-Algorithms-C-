#include<bits/stdc++.h>
using namespace std;

void reverse(string &str,int l,int r){
    while(l<r){
        swap(str[l],str[r]);
        l++;
        r--;
    }
    return;
}

void reverseWords(string &str){
    int l=0;
   for(int i=0;i<str.size();i++){
    if(str[i]==' '){
        reverse(str,l,i-1);
        l=i+1;
    }
   }
 
 reverse(str,l,str.size()-1);

reverse(str,0,str.size()-1);

return;

}

int main(){
string str;

getline(cin,str);

reverseWords(str);

for(int i=0;i<str.size();i++){
    cout<<str[i];
}

    return 0;
}