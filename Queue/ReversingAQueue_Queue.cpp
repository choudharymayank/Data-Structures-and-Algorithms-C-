#include <bits/stdc++.h> 
#include <queue>
using namespace std; 


void Print(queue<int> Queue) 
{ 
	while (!Queue.empty()) { 
		cout << Queue.front() << " "; 
		Queue.pop(); 
	} 
} 

void reverse_Iterative(queue<int> &q) 
{ 
	stack<int> st; 
	while (!q.empty()) { 
		st.push(q.front()); 
		q.pop(); 
	} 
	while (!st.empty()) { 
		q.push(st.top()); 
		st.pop(); 
	} 
} 


void reverse_Rec(queue<int>& q) 
{ 
	if(q.empty())
	   return;
	   
	int x = q.front();
	 q.pop();
	   
   reverse_Rec(q);
   q.push(x);
} 

 
int main() 
{ 
	queue<int> q; 
	q.push(12); 
	q.push(5); 
	q.push(15);
	q.push(20); 

	reverse_Rec(q); 
	Print(q); 

    reverse_Iterative(q);
    Print(q);

    reverse_Iterative(q);
    Print(q);
} 
