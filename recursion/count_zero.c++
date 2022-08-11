#include<bits/stdc++.h>
using namespace std;
int fun(int n){
    if(n==0)
    return 0;
   int r=n%10;
   if(r==0)
    return 1+fun(n/10);
    return fun(n/10);
}
int main(){
   int n;
   cin>>n;
   cout<<fun(n);
    return 0;
}