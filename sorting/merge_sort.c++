#include<bits/stdc++.h>
using namespace std ;

void merge(vector<int>&a,int l,int mid,int r){
    int i=l,j=mid+1;
    int b[r-l+1] ;
    int k=0 ;
     while(i<=mid&&j<=r)
	 {
       	  	if(a[i]<a[j])
       	  	{
             b[k] = a[i] ;
       	  	 i++;
		    }
		    else
		    {
                b[k] = a[j] ;
		    	j++;
			}
            k++ ;
	 }
	 if(i>mid) {
	 	while(j<=r){
           b[k] = a[j] ;
           k++ ;
	 		j++;
		 }
	 }else{
	 	while(i<=mid){
           b[k] = a[i] ;
           k++ ;
       	  	 i++;
		 }
	 }
	 for(int k=l;k<=r;k++)
	 {
	 	      a[k] = b[k-l] ;
	 }

 }
void merge_sort(vector<int>&v,int l,int r){
    if(l<r){
        int mid = l+(r-l)/2 ;
        merge_sort(v,l,mid) ;
        merge_sort(v,mid+1,r) ;
        merge(v,l,mid,r) ;
    }   
}
int main(){
   int n ;
   cin>>n;  
   vector<int>v(n) ;
   for(int i=0;i<n;i++) cin>>v[i] ;
    merge_sort(v,0,n-1) ;
    for(int i=0;i<n;i++)
    cout<<v[i]<<" " ;
    return 0 ;
}