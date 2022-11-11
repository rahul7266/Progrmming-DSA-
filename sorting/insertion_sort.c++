#include<bits/stdc++.h>
using namespace std ;
void insertion_sort_iterative(vector<int>&v,int n){
    for(int i=1;i<n;i++){
        int j=i-1 ;
        int temp = v[i] ;
        while(j>=0 && v[j]>temp){
            v[j+1] = v[j] ;
            j-- ;
        }
        swap(v[j+1],temp) ;
    }
}
void insertion_sort_recursive(vector<int>&v,int i,int n){
    if(i==n) return ;
    int temp = v[i] ;
    int j = i-1 ;
    while(j>=0&&v[j]>temp){
        v[j+1] = v[j] ;
        j-- ;
    }
    swap(v[j+1],temp) ;
    insertion_sort_recursive(v,i+1,n) ;
}
int main(){
    int n ;cin>>n ;
    vector<int>v(n) ;
    for(int i=0;i<n;i++) cin>>v[i] ;

    //insertion_sort_iterative(v,n) ;
    insertion_sort_recursive(v,0,n) ;
     for(int i=0;i<n;i++)
    cout<<v[i]<<" " ;
    return 0 ;
}