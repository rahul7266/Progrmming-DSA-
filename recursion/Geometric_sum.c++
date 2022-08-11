#include<bits/stdc++.h>
using namespace std;
double fun(int n){
    if(n==0)
    return 1;
    double x=1.0/pow(2,n);
    return x+fun(n-1);
}
int main(){
   int n;
   cin>>n;
   cout<<fun(n);
    return 0;
}