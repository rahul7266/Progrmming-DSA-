// iterative

#include<bits/stdc++.h>
using namespace std;
void bubble_sort_iterative(vector<int>&v, int n){
    for(int i=0;i<n-1;i++)
    for(int j=0;j<n-i-1;j++)
    if(v[j]>v[j+1])
    swap(v[j],v[j+1]) ;
}

void bubble_sort_recursive(vector<int>&v, int n){
    if(n==1) return ;

    for(int i=0;i<n-1;i++)
     if(v[i]>v[i+1])
    swap(v[i],v[i+1]) ;

    bubble_sort_recursive(v,n-1) ;
}
int main(){
    int n ;cin>>n ;
    vector<int>v(n) ;
    for(int i=0;i<n;i++) cin>>v[i] ;
    
   // bubble_sort_iterative(v,n) ;
   bubble_sort_recursive(v,n) ;
    for(int i=0;i<n;i++)
    cout<<v[i]<<" " ;
    return 0 ;
}