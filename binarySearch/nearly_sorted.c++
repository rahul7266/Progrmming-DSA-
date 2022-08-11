//here nearly sorted means element may be at i,i+1,i-1
#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n) ;
    for(int i=0; i<n; i++) cin>>v[i] ;
    int l=0,r=n-1,p;
    while( l< r)
    {
        int mid=l+(r-l)/2;
        if(v[mid]==k ||v[mid-1]==k ||v[mid+1]==k)
     {
         p=mid;
         break ;
     }
        else if(k<v[mid])
        r=mid-2 ;
        else l=mid+2 ;
    }
    return 0;
}