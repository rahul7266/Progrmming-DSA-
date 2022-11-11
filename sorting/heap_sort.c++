#include<bits/stdc++.h>
using namespace std ;
void heapify(vector<int>&a,int i,int n){
    int largest = i ;
    int l = 2*i+1 ;
    int r = 2*i+2 ;
    if(l<n && a[l]>a[largest]) largest = l ;
    if(r<n && a[r]>a[largest]) largest = r ;

    if(largest != i){
         swap(a[largest],a[i]);

         heapify(a,largest,n) ;
    }
     

}
void heap_sort(vector<int>&v,int n){
    for(int i= n/2-1;i>=0;i--)
    heapify(v,i,n) ;

    for(int i=n-1;i>0;i--){
        swap(v[i],v[0]) ;
        heapify(v,0,i) ;
    }
}
int main(){
   int n ;
   cin>>n;  
   vector<int>v(n) ;
   for(int i=0;i<n;i++) cin>>v[i] ;
    heap_sort(v,n) ;
    for(int i=0;i<n;i++)
    cout<<v[i]<<" " ;
    return 0 ;
}