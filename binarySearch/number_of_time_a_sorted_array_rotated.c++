#include<bits/stdc++.h>
using namespace std ;
int minRotated(vector<int>v ,int l,int r,int n)
{
    int t;
    while(l<=r)
    {

      //array is  sorted from l to r 
       if(v[l] <= v[r]){
                return v[l];
            }
            
       int mid=l+(r-l)/2 ;
       int next=(mid+1) % n ;
       int prev = (mid+n-1) % n ;
       if(v[mid]<=v[prev] && v[mid] <= v[next])
       {
         t= mid ;
         break;
       }
       else if(v[l]<=v[mid]) //means left part of mid is sorted then we will search in right part
       l=mid+1;
       else if(v[mid]<=v[r])
       r=mid-1 ;
    }
    return t ;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n) ;
    for(int i=0; i<n; i++) cin>>v[i] ;
    cout<<minRotated(v,0,n-1,n);
    return 0;
}