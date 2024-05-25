//Odd Sized Matrix
//All elements are distinct
#include<bits/stdc++.h>
using namespace std;
#define n 3
#define m 3

int matrixMedian(int matrix[n][m]){
int min=matrix[0][0],max=matrix[0][m-1];
for(int i=0;i<n;i++){
if(matrix[i][0]<min){
    min=matrix[i][0];
}
if(matrix[i][m-1]>max){
    max=matrix[i][m-1];
}
}

int medPos=(n*m +1)/2;

while(min<max){
    int mid=(min+max)/2;
    int midPos=0;
    for(int i=0;i<n;i++){
        midPos+=upper_bound(matrix[i],matrix[i]+m,mid)-matrix[i];
    }

    if(midPos<medPos){
        min=mid+1;
    }else{
        max=mid;
        //max!=mid+1 but only max = mid because we need to ensure that when the loop gets over
        //value of min and max should be same.
    }
}
return min; //or return max as the value of both is same
}

int main(){
int matrix[n][m];

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>matrix[i][j];
    }
}

cout<<matrixMedian(matrix);

    return 0;
}