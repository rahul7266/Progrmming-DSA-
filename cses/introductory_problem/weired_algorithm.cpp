#include<bits/stdc++.h>
using namespace std ;
void fun(vector<long long int>&v, long long int n){
    v.push_back(n) ;
    if(n==1) return ;

    if(n&1) fun(v,3*n +1) ;
    else fun(v,n/2) ;

}
int main(){
   long long int n;
    cin>>n ;
    vector<long long int>res ;
    fun(res,n) ;
for(auto x:res)
cout<<x<<" " ;
    return 0 ;
}