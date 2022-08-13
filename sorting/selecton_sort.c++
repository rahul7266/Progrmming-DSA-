#include<bits/stdc++.h>
using namespace std ;
void selection_sort_iterative(vector<int>&v, int n){
    for(int i=0;i<n-1;i++){
        int indx = i ;
        for(int j=i+1;j<n;j++)
            if(v[j]<v[indx])
            indx = j ;

        swap(v[indx],v[i]) ;
    }
}

void selection_sort_recursive(vector<int>&v, int n){
    if(n<=1) return ;

     int indx = n-1 ;
    for(int i=0;i<n-1;i++)
     if(v[i]>v[indx])
        indx = i ;
    swap(v[indx],v[n-1]) ;
    selection_sort_recursive(v,n-1) ;
}
int main(){
    int n ;cin>>n ;
    vector<int>v(n) ;
    for(int i=0;i<n;i++) cin>>v[i] ;

  //  selection_sort_iterative(v,n) ;
  selection_sort_recursive(v,n) ;
     for(int i=0;i<n;i++)
    cout<<v[i]<<" " ;
    return 0;
}