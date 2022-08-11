#include<bits/stdc++.h>
using namespace std;
int fun(int m,int n){
    if(m==0||n==0)
    return 0;
    return m+fun(m,n-1);
}
int main(){
   int m,n;
   cin>>m>>n;
   cout<<fun(m,n);
    return 0;
}