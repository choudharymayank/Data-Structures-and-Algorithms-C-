#include<bits/stdc++.h>
using namespace std;

struct TwoStacks{
int * arr;
int top1,top2,capacity;

TwoStacks(int c){
    arr=new int[c];
    top1=-1;
    top2=c;
    capacity=c;
}

void push1(int x){
    if(top1<top2-1){
        top1++;
       arr[top1]=x;
       return;
   }
   cout<<"No space to insert in stack1"<<endl;
}

void push2(int x){
    if(top1<top2-1){
         top2--;
         arr[top2]=x;
         return;
    }
    cout<<"No space to insert in stack2"<<endl;
    return;
}

int pop1(){
    if(top1!=-1){
        int x=arr[top1];
        top1--;
        return x;
    }
    else{
        cout<<"No element in stack1"<<endl;
        exit(1);
    }
}

int pop2(){
if(top2<capacity){
    int x=arr[top2];
    top2++;
    return x;
}

cout<<"No element in stack2"<<endl;
exit(1);
}

int size1(){
    return (top1+1);
}

int size2(){
    return (capacity-top2);
}

int peek1(){
    if(top1!=-1){
        return arr[top1];
    }
   cout<<"No element in stack1"<<endl; 
}

int peek2(){
    if(top2!=capacity){
        return arr[top2];
    }
    cout<<"No element in stack2"<<endl;
}

};

int main(){
TwoStacks st(6);

st.push1(1);
st.push1(2);
st.push1(3);
st.push1(4);
st.push1(5);
st.push1(6);
st.push2(7);
cout<<st.pop1()<<endl;
st.push2(7);
cout<<st.peek1()<<endl;
cout<<st.peek2()<<endl;

cout<<st.pop1()<<endl;
cout<<st.pop1()<<endl;cout<<st.pop1()<<endl;cout<<st.pop1()<<endl;cout<<st.pop1()<<endl;cout<<st.pop1()<<endl;cout<<st.pop1()<<endl;
cout<<st.pop2()<<endl;cout<<st.pop2()<<endl;cout<<st.pop2()<<endl;cout<<st.pop2()<<endl;cout<<st.pop2()<<endl;

    return 0;
}